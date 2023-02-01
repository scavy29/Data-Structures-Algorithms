#include<iostream>
using namespace std;

bool pallindrome(string str,int i,int j)
{
    if(i>j)
    return true;
    if(str[i]!=str[j])
        return false;
    else
    return pallindrome(str,i+1,j-1);
}

int main()
{
    string name="abbccbba";
    bool ispall=pallindrome(name,0,name.length()-1);
    if(ispall)
    {
        cout<<"Is a Pallindrome";
    }
    else{
        cout<<"Not a Pallindrome";
    }

}