#include<iostream>
using namespace std;

void explainpair()
{
  cout<<"Normal Pair"<<endl;
  pair<int,int>p={1,2};
  cout<<p.first<<" "<<p.second;
  cout<<endl;

  pair<int,pair<int,int>>p1={1,{3,4}};
  cout<<"Three Variables"<<endl;
  cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;
  cout<<endl;

  pair<int,int>p3[]={{1,2},{3,4},{5,6}};
  cout<<"Arrays"<<endl;
  cout<<p3[0].first;
  cout<<p3[0].second;
  cout<<" ";
  cout<<p3[1].first;
  cout<<p3[1].second;
  cout<<" ";
  cout<<p3[2].first;
  cout<<p3[2].second;
}

int main()
{
  explainpair();
}