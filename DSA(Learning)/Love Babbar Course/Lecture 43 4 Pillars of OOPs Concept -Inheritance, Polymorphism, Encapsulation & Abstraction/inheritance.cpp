#include<iostream>
using namespace std;

class human{
    public:
    int age;
    int height;
    int weight;
    public:
    int getage()
    {
        return this->age;
    }
    void setw(int w)
    {
        this->weight=w;
    }
};

class male:public human{
    public:
    string color;
    
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

int main()
{
    male m1;
    cout<<m1.age<<endl; 
    m1.setw(80);
    cout<<m1.weight<<endl;
    cout<<m1.height<<endl;
    m1.sleep();
}
