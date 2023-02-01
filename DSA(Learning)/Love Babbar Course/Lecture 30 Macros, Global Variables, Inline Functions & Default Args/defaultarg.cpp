#include<iostream>
using namespace std;

int print(int arr[],int size,int start=5)
{
    for(int i=start;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    // print(arr,9,2);
    print(arr,9);
}