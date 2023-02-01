#include<iostream>
using namespace std;

int selectionsort(int arr[],int n)
{
    int min,i,j,temp;

for(i=0;i<n-1;i++)
    {
        min=i;
    
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min])
        {
            min=j;
        }
    }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    // swap(arr[min],arr[i]);
    }
    
    
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;

}

int main()
{
    int arr[]={5,2,9,7,6};
    cout<<selectionsort(arr,5);
}