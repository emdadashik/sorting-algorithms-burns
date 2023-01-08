#include <iostream>

using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i = 1 ; i<=n ; i++)
    {
        for(int j=i+1 ; j<=n ; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
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
    
    selection_sort(ara,n);
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}
