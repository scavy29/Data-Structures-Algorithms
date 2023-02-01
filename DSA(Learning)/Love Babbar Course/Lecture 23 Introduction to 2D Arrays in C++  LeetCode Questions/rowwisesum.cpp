#include<iostream>
using namespace std;

void matrixsum(int arr[][3])
{
    cout<<"---Matrix Sum---"<<endl;
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<sum<<" ";
}

void rowsum(int arr[][3])
{
    cout<<"---Row Sum---"<<endl;
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


void colsum(int arr[][3])
{
    cout<<"---Col Sum---"<<endl;
        for(int j=0;j<3;j++)
    {
        int sum=0;
    for(int i=0;i<3;i++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<endl;
    matrixsum(arr);
    cout<<endl;
    rowsum(arr);
    cout<<endl;
    colsum(arr);
    cout<<endl;
}