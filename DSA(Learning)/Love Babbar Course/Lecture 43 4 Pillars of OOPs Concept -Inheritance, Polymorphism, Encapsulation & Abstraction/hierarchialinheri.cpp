#include<iostream>
using namespace std;

class A{
    public:
        void fun1(){
            cout<<"Inside Function 1"<<endl;
        }
};

class b:public A{
    public:
    void fun2(){
            cout<<"Inside Function 2"<<endl;
        }
};

class c:public A{
    public:
    void fun3(){
            cout<<"Inside Function 3"<<endl;
        }
};


int main(){
    A obj1;
    obj1.fun1();
    b obj2;
    obj2.fun1();
    obj2.fun2();
    c obj3;
    obj3.fun1();
    obj3.fun3(); 
}