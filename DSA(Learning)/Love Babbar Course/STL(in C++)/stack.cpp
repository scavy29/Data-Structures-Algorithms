#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>name;
    name.push("vikrant");
    name.push("vijay");
    name.push("dekate");
    cout<<"Before POP Size: "<<name.size()<<endl;
    name.pop();
    cout<<"Top ka Element: "<<name.top()<<endl;
    name.pop();
    cout<<"Last Element: "<<name.top()<<endl;
    cout<<"Size: "<<name.size()<<endl;
}
