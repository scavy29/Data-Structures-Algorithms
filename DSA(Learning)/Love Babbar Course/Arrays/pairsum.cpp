#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int k=5;

    for(int i=0;i<5;i++)
    {
        for(int j=1;j<4;j++)
        
            if(arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<" "<<arr[j]<<" ";
            }
        
    }
    return 0;
}