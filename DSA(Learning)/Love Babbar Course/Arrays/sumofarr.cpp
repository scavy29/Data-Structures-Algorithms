#include<iostream>
using namespace std;

int sumofarr(int arr[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
         sum+=arr[i];
        //  sum=sum+
        //  sum-=1;
    }
    return sum;
} 

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<sumofarr(arr);
}