#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string>name;
    name.push("vikrant");
    name.push("vijay");
    name.push("dekate");
    name.pop();
    name.pop();
    cout<<"First "<<name.front()<<endl;
    cout<<"Last "<<name.back()<<endl;
}
