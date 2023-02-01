#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(11);
    d.push_front(1);
    cout<<"Size-> "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    cout<<"Empty/Not: "<<d.empty()<<endl;
    cout<<"Before Erase: "<<d.size()<<endl;
    d.erase(d.end(),d.end()+1);
    cout<<"After Erase: "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Element at index 1: "<<d.at(1);
}
