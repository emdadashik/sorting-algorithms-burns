#include <bits/stdc++.h>

using namespace std;

void merge_sort(int lo,int hi,int ara[])
{
    int temp[hi];
    if(lo==hi)
    {
        return;
    }

    int mid = (lo+hi)/2;

    int b[mid],i1=0;
    for(int i=0 ; i<=mid ; i++){
        b[i1] = ara[i];
        i1++;
    }
    int c[hi-(mid+1)],i2=0;
    for(int i=mid+1 ; i<=hi ; i++){
        c[i2] = ara[i];
        i2++;
    }
    merge_sort(lo,mid,b);
    merge_sort(mid+1,hi,c);

    
    int indx1 = 0;
    int indx2 = 0;

    for(int i=lo , j=mid+1 , k=lo ; k<=hi ; k++)
    {
        if(indx1 == mid)
            temp[k] = c[j++];
        else if(indx2 == hi)
            temp[k] = b[i++];
        else if(ara[i]>ara[j])
            temp[k] = b[i++];
        else
            temp[k] = c[j++];
    }

    for(int i=0 ; i<=hi ; i++)
    {
     ara[i] = temp[i];
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

    merge_sort(0,n-1,ara);

    for(int i=0 ; i<n ; i++)
        cout<<ara[i]<<" ";

    return 0;
}
