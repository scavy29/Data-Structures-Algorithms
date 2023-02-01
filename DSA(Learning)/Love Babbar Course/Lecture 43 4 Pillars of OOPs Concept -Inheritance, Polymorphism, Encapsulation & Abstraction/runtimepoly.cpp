#include<iostream>
using namespace std;

// Operator Overloading


class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+(B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<"Output: "<<val2-val1<<endl;
    }

    void operator()(){
        cout<<"I am a bracket"<<endl;
    }
};

class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class dog:public animal{
    public:
    void speak(){
        cout<<"Barking";
    }
};

int main()
{
    dog d1;
    animal a1;
    a1.speak();
    d1.speak();
}   



