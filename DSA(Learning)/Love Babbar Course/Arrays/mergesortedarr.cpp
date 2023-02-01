#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr1={1,2,3,0,0,0};
    vector<int>arr2={2,5,6};
    int m=3,n=3,size=m+n;

    vector<int>arr3;
    for(int i=0;i<m;i++)
    {
        arr3.push_back(arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr3.push_back(arr2[i]);
    }

    sort(arr3.begin(),arr3.end());
    
    for(int i=0;i<size;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
