#include<bits/stdc++.h>
using namespace std;

void explainprior()
{
  priority_queue <int> pq;
  pq.push(4);
  pq.push(2);
  pq.push(8);
  pq.emplace(3);
  cout<<pq.top()<<" ";

  cout<<endl;

  //To store minimum element in the top
  priority_queue<int,vector<int>,greater<int>>pq1;
  pq1.push(5);
  pq1.push(2);
  pq1.push(7);
  pq1.push(1);
  cout<<pq1.top()<<" ";
}

int main()
{
  explainprior();
}