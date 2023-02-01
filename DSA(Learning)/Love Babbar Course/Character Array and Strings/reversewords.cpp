#include<iostream>
using namespace std;

string reverseword(string a)
{
    a='.'+a+'.';
    int n=a.length();
    int end=n;
    string temp;
    for(int i=n-1;i>=0;i++)
    {
        if(a[i]=='.')
        {
            temp+=a.substr(i+1,end-i);
            end=i;
        }   
    }
    return temp.substr(0,temp.length()-1);
}

int main()
{
    string a;
    getline(cin,a);
    // cout<<a.length();
    cout<<a[10];
    // cout<<reverseword(a);
}