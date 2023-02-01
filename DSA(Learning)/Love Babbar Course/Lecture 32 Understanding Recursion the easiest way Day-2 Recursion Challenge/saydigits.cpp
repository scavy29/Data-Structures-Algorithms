#include<iostream>
using namespace std;

void saydig(int n,string arr[])
{
    //Base Case
    if(n==0)
        return ;

    //Processing
    int digit=n % 10;
    n=n / 10;

    //Recursive Call
    saydig(n,arr);   
    cout<<arr[digit]<<" ";
}

int main()
{
    string arr[6]={"zero","one","two","three","four","five"};
    int n;
    cin>>n;
    cout<<endl<<endl<<endl;
    saydig(n,arr);
    cout<<endl<<endl<<endl;
}
