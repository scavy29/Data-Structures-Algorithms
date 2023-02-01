#include<iostream>
using namespace std;

class human{
    private:
    int uid;

    public:
    int age;
    int height;
    int weight;
    private:
    int setuid(int u)
    {
        this->uid=u;
    }
    // public:
    // int getage()
    // {
    //     return this->age;
    // }
    // void setw(int w)
    // {
    //     this->weight=w;
    // }
};

class male:public human{
    string color;

};

int main()
{
    male m1;
    // m1.setuid(100);                             //Not Accessible since inherited from private which is not possible through public, private or protected way
}
