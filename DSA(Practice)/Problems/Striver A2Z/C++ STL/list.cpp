#include<bits/stdc++.h>
using namespace std;

void explainlist()
{
  list<int>ls;
  ls.push_back(1);
  ls.emplace_back(2);
  ls.push_front(3);
  ls.emplace_front(5);

  for(auto&it:ls)
  {
    cout<<it<<" ";
  }

  cout<<endl;

  for(auto it=ls.begin();it!=ls.end();it++)
  {
    cout<<" "<<*it;
  }

  // Rest all operations are same as vectors mostly
}

int main()
{
  explainlist();
}