#include<iostream>
using namespace std;

int counting(int n)
{
    if(n==0)
    {
        return ;
    }
    // cout<<n;
    // counting(n-1);

    counting(n-1);
        cout<<n;
}

int main()
{
    cout<<counting(5);
}