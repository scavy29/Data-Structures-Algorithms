#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //Max Heap
    priority_queue<int>maxi;

    // Min Heap
    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4); 
    int n=maxi.size();
    cout<<"Maxi Elements: ";
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4); 
    int n1=mini.size();
    cout<<"Minimum Elements: ";
    for(int i=0;i<n1;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"MAXI is Empty? "<<maxi.empty()<<endl;
    cout<<"MIN is Empty? "<<mini.empty()<<endl;
}
