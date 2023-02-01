#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5>a={1,2,3,4,5};
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Array at index 2: "<<a.at(2)<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl;
    cout<<"Front Element: "<<a.front()<<endl;
    cout<<"Back Element: "<<a.back()<<endl;
}