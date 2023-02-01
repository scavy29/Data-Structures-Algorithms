#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int rno;
        int age;
    public:
        int getage()
        {
            return this->age;
        }
};

int main()
{
    Student first;
    cout<<"All Clear"<<endl;
    return 0;
}