#include<iostream>
using namespace std;

int first(int arr[],int size,int key)
{
    int store=0;
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            store=mid;
            end=mid-1;

        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return store;

}

// /*
int second(int arr[],int size,int key)
{
    int store=0;
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            store=mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return store;
}

int main()
{
    int arr[]={0,5,5,6,6,6};
    int n=6;
    int key=5;
    cout<<first(arr,6,5)<<" ";
    cout<<second(arr,6,5);  
}
