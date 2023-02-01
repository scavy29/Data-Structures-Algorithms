#include<iostream>
using namespace std;

/*
Approach 1
int revarr(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/

/* Approach 2
int revarr(int arr[],int n)
{
    int rev[n];
    for(int i=0;i<n;i++)
    {
        rev[n-i-1]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=rev[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<rev[i]<<" ";
    }
}
*/

int revarr(int arr[],int n,int m)
{
    int s=m+1,e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;e--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    cout<<revarr(arr,6,3);
}