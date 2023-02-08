#include<bits/stdc++.h>
using namespace std;

/*Time constraint
  void glcm(int a,int b)
  {
  int gcd,lcm=1;
  for(int i=1;i<1000;i++)
  {
    if((a%i==0) && (b%i==0))
    {
      gcd=i;
    }
  }
  lcm=(a*b)/gcd;
  cout<<gcd<<" "<<lcm;
  }
*/

void glcm1(int a,int b)
{
  while(a%b!=0)
  {
    int remainder=a;
    a=b;
    b=remainder;
  }
  int gcd=b;
  int lcm=(a*b)/gcd;
  cout<<lcm<<" "<<gcd;
}

void glcm2(long long a1,long long b1)
{
  long long x=__gcd(a1,b1);
  long long l=(a1*b1)/x;
  cout<<x<<" "<<l;
}

int main()
{
  glcm2(536524,1215410);
  cout<<endl;
}

