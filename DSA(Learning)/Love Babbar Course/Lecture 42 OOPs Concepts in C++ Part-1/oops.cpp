#include<iostream>
using namespace std;

// If i don't declare a property and then too create an object only (1 byte) is allocated
class Hero{
    //Properies
    public:
    int health;
    string category;
};

int main()
{
    //Creation of Object
    Hero sage;
    cout<<"Health is: "<<sage.health;
    cout<<"Category is: "<<sage.category;
}