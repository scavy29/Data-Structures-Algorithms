#include<iostream>
using namespace std;

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swapalternate(int arr[],int size)
{
    // int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even[]={1,2,3,4,5,6};
    int odd[]={1,2,3,4,5};
    swapalternate(even,6);
    print(even,6);
    swapalternate(odd,5);
    print(odd,5);
}

