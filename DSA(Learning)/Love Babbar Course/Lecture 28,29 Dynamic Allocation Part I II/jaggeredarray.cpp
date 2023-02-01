#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter Number of rows: ";
    cin>>rows;
    
    int *numbers=new int[rows];         //Store no of columns
    int **arr=new int*[rows];           //Jaggered arrays

    for(int i=0;i<rows;i++)
    {
        cout<<"Enter Number of Columns for row: "<<i<<endl;
        cin>>numbers[i];
        arr[i]=new int[numbers[i]];
    }

    // numbers[i] is columns over here
    //Input Values
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<numbers[i];j++)
        {
            cout<<"Row: "<<i<<" Enter Value "<<i*numbers[i]+j<<" : ";
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<numbers[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
/* Static Jagged Array
int main()
{
    int arr[3][3]={{1,2,3},{4,5},{6}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/
