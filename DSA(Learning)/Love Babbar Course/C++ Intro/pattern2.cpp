#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=n;j++){
    //     cout<<i;
    //     }
    // cout<<endl;
    // }
}