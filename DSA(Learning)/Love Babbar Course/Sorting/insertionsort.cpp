#include<iostream>
using namespace std;

/*
Approach 1
int insertionsort(int arr[],int n)
{
    int j,i,key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}
*/

// Approach 2
int insertionsort(int arr[],int n)
{
    int j,i,key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>key)
            {
            arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
}

int main()
{
    int arr[]={5,2,9,7,6};
    cout<<insertionsort(arr,5);
}
