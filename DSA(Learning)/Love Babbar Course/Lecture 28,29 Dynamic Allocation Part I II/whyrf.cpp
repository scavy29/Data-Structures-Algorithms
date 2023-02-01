#include<iostream>
using namespace std;

void update(int n)
{
    n*=2;
}

void update1(int &n)
{
    n*=2;
}

int main()
{
    int i=5;
    update1(i);
    cout<<i;
}
