#include<iostream>
using namespace std;

bool linearsearch(int arr[][3],int k)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==k)
            return 1;
        }
    }
    return 0;
    
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    int key=6;
    cout<<linearsearch(arr,61);
}
    //     for(int j=0;j<3;j++)
    // {
    //     for(int i=0;i<3;i++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }


    


/*
    cout<<"---Row Wise---"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"---Column Wise---"<<endl;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    */

    /*
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"---Column Wise---"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */
