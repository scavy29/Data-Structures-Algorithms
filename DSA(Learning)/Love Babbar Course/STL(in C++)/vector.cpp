#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>v1(5,9);
    vector<int>v2(v1);
    cout<<"V1: "<<endl;
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"V2: "<<endl;
    for(int i:v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size-> "<<v.capacity()<<endl;
    cout<<"Element at Index 2: "<<v.at(2)<<endl;
    cout<<"Front: "<<v.front()<<endl<<"Back: "<<v.back()<<endl;
    cout<<"Before Pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Before Clearing: "<<v.size()<<endl;
    v.clear();
    cout<<"After Clearing: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl; 
}