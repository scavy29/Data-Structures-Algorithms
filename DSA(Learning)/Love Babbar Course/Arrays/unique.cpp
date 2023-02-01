#include<iostream>
using namespace std;
 
int main()
{
    int arr[]={1,1,1,2,3,4,4};
    int count=0;
    // int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;

    // Unique
    for(int i=0;i<6;i++)
    {
        int j;
        for(j=0;j<i;j++)
            if(arr[i]==arr[j])
            {
            break;
            }
        if(i==j){
        cout<<arr[i]<<" ";
        }
    }
}