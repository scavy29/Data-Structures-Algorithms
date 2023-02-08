#include<bits/stdc++.h>
using namespace std;

/*Naive Method
bool checkprime(int n)
{
  if(n==1)
  {
    return false;
  }
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
    {
      return false;
    }
    return true;
  }
}
*/

/*Optimised Method*/
void checkprime(int n)
{
  if(n==1)
  {
    cout<<"F";
  }
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      cout<<"F";
    }
    else
    {
    cout<<"T";
    }
  }
}

int main()
{
  checkprime(3);
}