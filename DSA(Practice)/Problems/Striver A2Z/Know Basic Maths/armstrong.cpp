#include<bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
  int result=0;
  int og=n;

  while(og)
  {
    int rem=og%10;
    result+=rem*rem*rem;
    og/=10;
  }

  if(result==n)
  {
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
}

int main()
{
  armstrong(371);
}

