#include<iostream>
using namespace std;

class a{
    public:
    void run(){
        cout<<"Bhago"<<endl;
    }
};

class b{
    public:
    void run(){
        cout<<"Rukhja"<<endl;
    }
};

class c:public a,public b{
    
};

int main()
{
    c obj1;
    obj1.a::run();
    obj1.b::run();
}