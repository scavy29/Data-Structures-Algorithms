#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    s.pop();
    s.pop();

    if(s.empty())
    {
        cout<<"Stack is Empty!!!"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    cout<<"Top Element is: "<<s.top()<<endl;
    cout<<"Size: "<<s.size();
}