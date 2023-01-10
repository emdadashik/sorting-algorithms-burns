#include <iostream>
#include <algorithm>

using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int inversion_count = 0;

    i = left; 
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inversion_count += (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inversion_count;
}

int merge_sort(int arr[], int temp[], int left, int right)
{
    int mid, inversion_count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        inversion_count += merge_sort(arr, temp, left, mid);
        inversion_count += merge_sort(arr, temp, mid + 1, right);
        inversion_count += merge(arr, temp, left, mid + 1, right);
    }
    return inversion_count;
}

int count_inversions(int arr[], int size)
{
    int temp[size];
    return merge_sort(arr, temp, 0, size - 1);
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of inversions: " << count_inversions(arr, size) << endl;
    return 0;
}
