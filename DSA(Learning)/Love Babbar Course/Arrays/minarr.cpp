#include<iostream>
using namespace std;

int minarr(int arr[],int n)
{
    // cin>>n;
    int min=INT16_MAX;

    for(int i=0;i<5;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Max is"<<minarr(arr,5);
}