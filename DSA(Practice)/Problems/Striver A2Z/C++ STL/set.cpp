#include<bits/stdc++.h>
using namespace std;

void explainset()
{
  set<int>st;
  st.insert(5);
  st.insert(4);
  st.insert(3);
  st.insert(2);
  st.insert(2);
  st.insert(1);

  /*
  st.erase(3);
  int c=st.count(2);
  cout<<c<<endl;
  for(auto it=st.begin();it!=st.end();it++)
  {
    cout<<*it<<" ";
  }
  */

  auto it1=st.find(1);
  auto it2=st.find(3);
  st.erase(it1,it2);
  

  for(auto&it:st)
  {
    cout<<it<<" ";
  }
}

int main()
{
  explainset();
}