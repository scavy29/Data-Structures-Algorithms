#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;

    int row=1;
    while(row<=n)
    {
        int val=row;
        int col=1;
        // val=row;
        while(col<=row)
        {
            cout<<val;
            val+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}