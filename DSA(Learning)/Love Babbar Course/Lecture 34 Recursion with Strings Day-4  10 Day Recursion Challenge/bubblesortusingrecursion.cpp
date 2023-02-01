#include<iostream>
using namespace std;

void bubblesort(int *arr,int size)
{
    // Base Case
    if(size==0 || size==1)
    return ;

    //Bubble Sort
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,size-1);
}

int main()
{
    int arr[5]={10,24,54,32,8};
    bubblesort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}