#include<list>
#include<iostream>
using namespace std;

int main()
{
    list<int>l(5,1);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size-> "<<l.size()<<endl;
    l.push_front(5);
    l.push_back(6);
        for(int i:l)
    {
        cout<<i<<" ";
    }   
    cout<<endl;
    l.erase(l.begin());
    cout<<"Size-> "<<l.size()<<endl;
            for(int i:l)
    {
        cout<<i<<" ";
    } 
}