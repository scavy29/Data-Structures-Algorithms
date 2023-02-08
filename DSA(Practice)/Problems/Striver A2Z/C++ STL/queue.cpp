#include<bits/stdc++.h>
using namespace std;

void explainqueue()
{
  queue<int>q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.back()+=5;  //performs sum on last element
  cout<<q.back()<<" ";
  cout<<q.front()<<" ";
}

int main()
{
  explainqueue();
}