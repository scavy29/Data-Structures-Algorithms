#include<bits/stdc++.h>
using namespace std;

void solvediv(int n)
{
    int sum=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      cout<<i<<" ";
    }
  }
}

int main()
{
  solvediv(5);
}