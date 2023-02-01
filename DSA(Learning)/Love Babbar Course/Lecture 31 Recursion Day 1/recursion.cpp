#include<iostream>
using namespace std;

void solve(int n,int m)
{
    int r;
    r=m+n;
    cout<<"Result 1: "<<r<<endl;
}

void solve2(int n,int m)
{
    solve(m,n);
}

int main()
{
    int a,b;
    cin>>a>>b;
    solve(a,b);
    solve2(a,b);
}