#include<iostream>
using namespace std;

// /Approach 1
int mountain(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i])
        return i;
    }
}


int main()
{
    int arr[]={3,4,5,2};
    cout<<mountain(arr,4);
}