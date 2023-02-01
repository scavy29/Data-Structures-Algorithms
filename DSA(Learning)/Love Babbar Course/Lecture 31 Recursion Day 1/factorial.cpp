#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;
    
    return n*factorial(n-1);
    // int smallproblem=factorial(n-1);
    // int bigproblem=n*smallproblem;
    // return bigproblem;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}