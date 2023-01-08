#include<bits/stdc++.h>

using namespace std;

vector<int> merge_sort(vector<int>a){
    if(a.size() <= 1)
        return a;
    
    int mid = a.size()/2;
    vector<int>b;
    vector<int>c;
    
    for(int i=0 ; i<mid ; i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid ; i<a.size() ; i++)
    {
        c.push_back(a[i]);
    }
    
    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);
    
    vector<int>sorted_a;
    
    int indx1 = 0;
    int indx2 = 0;
    
    if(indx1 == sorted_b.size())
        sorted_a.push_back(sorted_c[indx2++]);
    
    else if(indx2 == sorted_c.size())
        sorted_a.push_back(sorted_b[indx1++]);
    
    else if(sorted_b[indx1] > sorted_c[indx2])
        sorted_a.push_back(sorted_c[indx2++]);
        
    else
        sorted_a.push_back(sorted_b[indx1++]);
        
    return sorted_a;
}

int main(){
    vector<int>a = {5,6,4,3,7,8,2,9};
    vector<int>ans = merge_sort(a);
    
    for(int i=0 ; i<a.size() ; i++)
        cout<<i<<" ";
        
    return 0;
}