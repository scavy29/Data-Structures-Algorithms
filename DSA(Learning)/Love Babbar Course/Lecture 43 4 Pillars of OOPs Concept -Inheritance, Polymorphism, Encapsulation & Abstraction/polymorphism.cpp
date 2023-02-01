#include<iostream>
using namespace std;

// Function Overloading
class a{
    public:
    void sayhello(){
        cout<<"Hi Vicky"<<endl;
    }

    void sayhello(string name){
        cout<<"Hi "<<name<<endl;
    }
};


int main()
{
    a obj1;
    obj1.sayhello();
    obj1.sayhello("Vikrant");
}