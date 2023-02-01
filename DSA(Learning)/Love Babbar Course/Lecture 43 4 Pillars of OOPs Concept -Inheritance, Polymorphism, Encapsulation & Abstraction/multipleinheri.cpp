#include<iostream>
using namespace std;

class animal{
    public:
    int weight;
    int id;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class human{
    public:
    string color;

    public:
    void speak(){
        cout<<"SPeaking"<<endl;
    }
};

class hybrid:public animal,public human{

};

int main()
{
    hybrid h1;
    h1.bark();
    h1.speak();
}