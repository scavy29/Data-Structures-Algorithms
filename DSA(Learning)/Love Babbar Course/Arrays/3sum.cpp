#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    vector<int>ans;

    int arr[]={1,2,3,1,2,3};
    int n=6;
    int k=61;

    int s=0,e=n-1,m=(s+e)/2;

    for(s=0;s<m;s++)
    {
        for(e=n-1;e>m;e--)
        {
            if(arr[s]+arr[e]+arr[m]==k)
            {
                ans.push_back(arr[s]);
                ans.push_back(arr[m]);
                ans.push_back(arr[e]);
            } 
        }
    }
}








//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



