#include<iostream>
using namespace std;

class animal{
    public:
    int weight;
    int id;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class dog:public animal{

};

int main()
{
    dog d1;
    d1.speak();
}