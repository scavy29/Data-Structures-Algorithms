#include<iostream>
using namespace std;

//Linear Seearch[O(n)]:-
/*
int occurence(int arr[],int n,int x)
{
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
        sum=count;
    }
    return sum;
}
*/

int first(int arr[],int size,int key)
{
    int store=-1;
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
    int store=-1;
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

int occurence(int arr[],int size,int key)
{
    int f=first(arr,size,key);
    int s=second(arr,size,key);
    int res=s-f+1;
    if(f==-1 && s==-1)
    {
        return 0;
    }
    return res;
}

int main()
{
    int arr[]={1 ,1 ,2, 2 ,2, 2, 3};
    cout<<occurence(arr,7,4);   
}