#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int t1=0,t2=1;
    cout<<t1<<" "<<t2<<" ";
    for(int i=0;i<n;i++)
    {
        // cout<<t1<<" ";
        int nxt=t1+t2;
        cout<<nxt<<" ";
        // t1=nxt;
        t1=t2;
        t2=nxt;
    }
}