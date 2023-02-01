#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="Vikrant";                         //Insert
    m[90]="Dekate";
    m[2]="Vijay";

    m.insert({462,"SDE"});                   //Other Way to Insert
    
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Is 462 Present?? "<<m.count(462)<<endl;
    m.erase(90);
    cout<<"After Erase: "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;
    auto it=m.find(2);

    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

}