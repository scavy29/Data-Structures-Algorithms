#include<iostream>
using namespace std;

class Stack{
    public:
        int top;
        int *arr;
        int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}

void pop(){
    if(top>=0)
    {
        top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
}

int peek(){
    if(top>=0 && top<size){
        return arr[top];
    }
    else{
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
}

bool empty(){
    if(top>=0)
    {
    return arr[top];
    }
    else{
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
}
};


int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    if(st.empty()){
        cout<<"Stack Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
}