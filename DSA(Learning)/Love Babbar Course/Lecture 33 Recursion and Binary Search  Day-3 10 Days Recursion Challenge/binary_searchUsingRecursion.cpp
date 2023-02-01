#include<iostream>
using namespace std;

//Recursion
void printarr(int arr[],int s,int e)
{
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarysearch(int *arr,int s,int e,int k)
{
    printarr(arr,s,e);
    
    // Base CASe
    if(s>e)
        return false;
    int mid=s+(e-s)/2;

    if(arr[mid]==k)
        return true;
    if(mid<k)
    {
    return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
}

int main()
{
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=16;
    int ans=binarysearch(arr,0,5,key);
    cout<<ans;
}