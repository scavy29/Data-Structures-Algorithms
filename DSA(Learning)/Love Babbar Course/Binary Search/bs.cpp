#include<iostream>
#include<vector>
using namespace std;

int bs(int arr[],int size,int key)
{
    int start=0,end=size-1;
    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int arr[]={2,3,4,5,7,9};
    cout<<bs(arr,6,22);
}