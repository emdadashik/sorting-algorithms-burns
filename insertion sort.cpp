#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
    int j,x;
    for(int i=1 ; i<n ; i++)
    {
        x = arr[i];
        j = i-1;
        while(j>=1 && arr[j]>x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = x;
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
    
    insertion_sort(ara,n);
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
