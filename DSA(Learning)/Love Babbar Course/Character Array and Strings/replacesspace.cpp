#include<iostream>
using namespace std;

string replace(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else
        {
            s.push_back(s[i]);
        }
    }
}

int main()
{
    char s1[]="My name is Khan";
    // cout<<s1;
    replace(s1);
    cout<<s1;
}
