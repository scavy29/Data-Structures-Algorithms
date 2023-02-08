#include<bits/stdc++.h>
using namespace std;

void explaindeque()
{
  deque<int>dq;
  dq.push_back(1);
  dq.emplace_back(2);
  dq.push_front(4);
  dq.emplace_front(5);  //(5,4,2,1)

  dq.pop_back();
  dq.pop_front();

  for(auto&it:dq)
  {
    cout<<it<<" ";
  }
}

int main()
{
  explaindeque();
}