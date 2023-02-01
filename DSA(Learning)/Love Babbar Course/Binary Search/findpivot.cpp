#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& arr) {
        int n = arr.size(), left = 0, right = 0;
        for(int i=0;i<n;i++)
        {
            right+=arr[i];
        }
        for(int i=0;i<n;left+=arr[i],right-=arr[i],i++)
        {
            if(left==right-arr[i])
        cout<<i;
        }
        return -1;
}

int main()
{
    vector<int>arr={1,7,3,6,5,6};
    vector<int>arr1={1,2,3};
    return pivotIndex(arr1);
}