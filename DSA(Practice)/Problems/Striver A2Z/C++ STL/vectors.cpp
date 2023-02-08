#include<bits/stdc++.h>
using namespace std;

void vectorprint()
{
  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);

  vector<pair<int,int>>v1;
  v1.push_back({1,2});
  v1.emplace_back(3,4);

  vector<int>v3(5);

  vector<int>v2(5,100);
  vector<int>v4(v2);

  //to Display
  /*
  cout<<v[0]<<" "<<v.at(0)<<" ";
  cout<<v.back()<<" ";
  */

 for(auto& it:v){
  cout<<it<<" ";
 }

 cout<<endl;

 for(int i=0;i<v2.size();i++)
 {
  cout<<v2[i]<<" ";
 }

 cout<<endl;

  vector<int>::iterator iter=v4.begin();
  for(iter;iter<v4.end();iter++)
  {
    cout<<*iter<<" ";
  }
  
}

int main()
{
  vectorprint();
}