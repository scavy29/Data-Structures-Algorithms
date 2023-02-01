#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(5);
    s.insert(1);

    cout<<"Set Elements: "<<endl;
    for(int i:s)
    {
        cout<<i<<" ";
    }

    cout<<"Size:"<<s.size()<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<"After Erase: "<<endl;
    for(int i:s)
    {
        cout<<i<<" ";
    }

    cout<<"5 is present or not?? "<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(3);
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}