#include<iostream>
using namespace std;

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}


int main()
{
    char n1[20];
    cin>>n1;

    cout<<"Length of String: "<<getlength(n1)<<endl;
}