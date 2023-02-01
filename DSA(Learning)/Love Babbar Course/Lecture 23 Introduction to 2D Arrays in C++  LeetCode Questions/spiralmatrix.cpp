#include<iostream>
#include<vector>
using namespace std;

void spiral(int arr[][3])
{
    vector<int>ans;

    int m=3,n=3;
    int count=0;
    int total=m*n;
    int startrow=0,endrow=m-1,startcol=0,endcol=n-1;

    while(count<total)
    {
    // Startcol to endcol
    for(int index=startcol;index<=endcol;index++)
    {
        cout<<arr[startrow][index]<<" ";
        count++;
    }
    cout<<endl;
    startrow++;
    for(int index=startrow;index<=endrow;index++)
    {
        cout<<arr[index][endcol]<<" ";
        count++;
    }
    cout<<endl;
    endcol--;
    for(int index=endcol;index>=startcol;index--)
    {
        cout<<arr[endrow][index]<<" ";
        count++;
    }
    endrow--;
    cout<<endl;
    for(int index=endrow;index>=startrow;index--)
    {
        cout<<arr[index][startcol]<<" ";
        count++;
    }
    startcol++;
    cout<<endl;
    }
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    spiral(arr);
}