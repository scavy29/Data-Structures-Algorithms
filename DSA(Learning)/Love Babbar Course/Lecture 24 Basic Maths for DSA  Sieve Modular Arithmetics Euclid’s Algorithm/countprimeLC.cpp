#include<iostream>
using namespace std;

int countprime(int n)
{
    int count=0;
    if(n<=1)
    {
        count=0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        count+=0;
        }
        else
        {
            count+=1;
        }
    }
    return count;
}

int main()
{
    cout<<countprime(10);
}