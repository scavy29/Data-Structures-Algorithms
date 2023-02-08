#include<bits/stdc++.h>
using namespace std;

void lowerbound()
{
  int arr[]={1,4,4,4,4,9,9,10,11};
  int x=4,n=9;
  int ind=lower_bound(arr,arr+n,x)-arr;
  ind--;
  if(ind!=n && arr[ind]==x)
  {
    cout<<ind;
  }
  else
  {
    cout<<"-1";
  }
}

int main()
{
  lowerbound();
}