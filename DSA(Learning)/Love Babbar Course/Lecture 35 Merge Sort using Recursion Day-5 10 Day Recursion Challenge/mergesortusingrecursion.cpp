#include<iostream>
using namespace std;

void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    //Create New Array
    int *first=new int[len1];
    int *second=new int[len2];

    //Copy Values
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }

    //Merge two sorted arrays
    int index1=0;
    int index2=0;

    mainArrayIndex=s;

    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        }
        else
        {
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while(index1<len1)
    {
        arr[mainArrayIndex++]=first[index1++];
    }

    while(index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
}

void mergesort(int *arr,int s,int e)
{
    // Base case
    if(s>=e)
        return;

    int mid=s+(e-s)/2;

    //Left Part sort karenge
    mergesort(arr,s,mid);

    //Right part sort karenge
    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);   
}

int main()
{
    int arr[5]={5,4,22,31,9};
    int n=5;

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}