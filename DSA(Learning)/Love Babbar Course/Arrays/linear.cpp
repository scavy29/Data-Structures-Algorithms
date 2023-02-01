#include<iostream>
using namespace std;

int searchli(int arr[],int n)
{
    int find;
    cin>>find;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==find)
        
            cout<<"Found at Index: "<<i<<endl;

    }
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }



    cout<<searchli(arr,5);
}