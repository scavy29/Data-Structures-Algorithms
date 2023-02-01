#include<iostream>
using namespace std;

void wave(int arr[][3])
{
    for(int j=0;j<3;j++)
    {
        if(j&1)
        {
            for(int i=2;i>=0;i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int i=0;i<3;i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    wave(arr);
}