#include<bits/stdc++.h>
using namespace std;

// T(c):O(n)
void count(int num)
{
  int a=num;
  int cnt=0,rem;
  while(a>0)
  {
    rem=a%10;
    if(rem>0)
    {
    if(num%rem==0)
    {
      cnt++;
    }
  }
  a=a/10;
  }
  cout<<cnt;
}

void count1(int num)
{
  int count=(int)(log10(num)+1);
  cout<<count;
}

int main()
{
  count1(2446);
}