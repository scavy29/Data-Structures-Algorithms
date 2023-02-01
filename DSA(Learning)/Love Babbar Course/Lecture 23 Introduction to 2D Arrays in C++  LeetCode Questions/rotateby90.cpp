#include<iostream>
#include<vector>
using namespace std;

void rotate(int arr[][3])
{
    int n=3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            // cout<<arr[i][j]<<" ";
            cout<<arr[j][i]<<" ";
        }
    }
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);
}