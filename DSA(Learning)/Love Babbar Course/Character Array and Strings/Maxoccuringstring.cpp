#include<iostream>
using namespace std;

char occurence(string s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        int num=0;
        if(s[i]>='a' && s[i]<='z')
        {
            num=s[i]-'a';
        }
        else
        {
            num=s[i]-'A';
        }
        arr[num]++;
    }
    int maxc=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxc<arr[i])
        {
            ans=i;
            maxc=arr[i];
        }
    }
    char final='a'+ans;
    return final;
}

int main()
{
    string s;    
    cin>>s;
    cout<<occurence(s);
}