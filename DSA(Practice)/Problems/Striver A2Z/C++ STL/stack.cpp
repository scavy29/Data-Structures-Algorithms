#include<bits/stdc++.h>
using namespace std;

void explainstack()
{
  stack<int>st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.pop();
  st.pop();

  cout<<st.top()<<" "<<st.size()<<" "<<st.empty();
  // cout<<" "<<st.size()<<" "<<st.empty();

  stack<int>st1,st2;
  st1.swap(st2);
}

int main()
{
  explainstack();
}