#include <iostream>

using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    
    int ara[n];
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>ara[i];
    }
    
    bubble_sort(ara,n);
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
