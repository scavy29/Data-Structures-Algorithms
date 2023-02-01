#include<iostream>
using namespace std;

/*
int main()
{
    int n;
    cin>>n;

//  Creating 2D array
    int** arr =new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }

    
// Taking Input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

// Print Output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

int main()
{
    int row,col;
    cin>>row>>col;

    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Releasing Memory
    for(int i=0;i<row;i++)
    {
        delete []arr[i];
    }
    
    delete []arr;
}