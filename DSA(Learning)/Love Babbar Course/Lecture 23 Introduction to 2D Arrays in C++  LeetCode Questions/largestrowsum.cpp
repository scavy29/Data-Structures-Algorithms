#include<iostream>
using namespace std;

void largerowsum(int arr[][3])
{
    int msum=0;
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
            if(sum>msum)
            {
                msum=sum;
            }
        }
    }
        cout<<msum<<" "<<endl;
}

void largercolsum(int arr[][3])
{
    int msum=0;
        for(int j=0;j<3;j++)
    {
        int sum=0;
    for(int i=0;i<3;i++)
        {
            sum+=arr[i][j];
            if(sum>msum)
            {
                msum=sum;
            }
        }
    }
        cout<<msum<<" ";
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    largerowsum(arr);
    cout<<endl;
    largercolsum(arr);
}