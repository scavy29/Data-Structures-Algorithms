#include<iostream>
using namespace std;


int main()
{
    int m,n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    // for(int i=0;i<n;i++)
    // {
    //     // cout<<"*";
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}
