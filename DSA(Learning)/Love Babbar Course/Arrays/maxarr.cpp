#include<iostream>
using namespace std;

int maxarr(int arr[],int n)
{
    // cin>>n;
    int max=INT16_MIN;

    for(int i=0;i<5;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Max is"<<maxarr(arr,5);
}