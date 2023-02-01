#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *ptr=&i;
    int **ptr1=&ptr;
    cout<<"All is Well:"<<endl;
    cout<<"Original Num: "<<i<<endl;
    cout<<"Pointer ptr: "<<*ptr<<endl;
    cout<<"Pointer ptr Address: "<<ptr<<endl;
    cout<<"Pointer ptr Address: "<<&ptr<<endl;
    cout<<"-------"<<endl;
    cout<<"Pointer ptr1: "<<**ptr1<<endl;
    cout<<"Pointer ptr1 Address: "<<ptr1<<endl;
    cout<<"Pointer ptr1 Address: "<<&ptr1<<endl;
}