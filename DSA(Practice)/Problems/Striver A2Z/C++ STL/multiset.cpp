#include<bits/stdc++.h>
using namespace std;

void explainmultiset()
{
  multiset<int>ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.erase(ms.find(1));
  for(auto&it:ms)
  {
    cout<<it<<" ";
  }
}

int main()
{
  explainmultiset();
}