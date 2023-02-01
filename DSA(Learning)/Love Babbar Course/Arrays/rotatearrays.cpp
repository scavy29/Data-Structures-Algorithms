#include<iostream>
#include<vector>
using namespace std;

int rotate(int arr[],int n,int k)
{
    int ans[n]={0};
    // vector<int>ans;
    for(int i=0;i<n;i++)
    {
        ans[(i+k)%2]=arr[i];
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    cout<<rotate(arr,7,3);
}