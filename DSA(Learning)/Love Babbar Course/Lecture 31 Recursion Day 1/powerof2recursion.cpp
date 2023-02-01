#include<iostream>
#include<math.h>
using namespace std;

/*
int calculatepower(int base,int raised)
{
    if(raised!=0)
        return (base*calculatepower(base,raised-1));
    else
        return 1;
}
*/

int calpower(int n)
{
    if(n==0)
        return 1;
    
    return 2*calpower(n-1);
    // int smallprob=calpower(n-1);
    // int bigprob=2*smallprob;
    // return bigprob;
}

int main()
{
    int num;
    cin>>num;
    cout<<calpower(num);
    // cout<<calculatepower(N,n);
}