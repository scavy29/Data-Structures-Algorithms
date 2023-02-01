#include<iostream>
using namespace std;

int sumofarr(int *arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }

    int remainingpart=sumofarr(arr+1,size-1);
    int ans=arr[0]+remainingpart;
    return ans;
}
/*
int sumofarr(int arr[],int size)
{
    if(size<=0)
        return 0;
    return (sumofarr(arr,size-1)+arr[size-1]);
}
*/


int main()
{
    int arr[]={1,1,1,1,1,1};
    int size=6;
    cout<<sumofarr(arr,size);
}
