#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int search(int arr[][5],int target)
{
    int row=5,col=5;
    int rowindex=0;
    int colindex=col-1;

    while(rowindex<row && colindex>=0)
    {
        int element=arr[rowindex][colindex];
        if(element==target)
        {
            return 1;
        }
        else if(element<target)
        {
            rowindex++;
        }
        else
        {
            colindex--;
        }
    }
    return 0;
}

int main()
{
    int arr[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    search(arr,22);
}