#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int arr[]={0,1,2,2,1,0};
    int n=6;
    vector<int>ans;


//Approach 1
/*
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
        ans.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
        ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
        ans.push_back(arr[i]);
        }
    }
    */

//    Approach 2

for(int i=0;i<n;i++)
{
    ans.push_back(arr[i]);
}

sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}