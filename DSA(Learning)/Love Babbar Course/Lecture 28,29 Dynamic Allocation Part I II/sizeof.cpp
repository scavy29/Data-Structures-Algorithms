#include<iostream>
using namespace std;

int getsum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    /*
    char ch;
    cout<<sizeof(ch)<<endl;
    char *ptr=&ch;
    cout<<sizeof(ptr);
    */

   int n;
   cin>>n;

   int *arr=new int[n];

   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";ṇ
//    }ṇ

   cout<<"Sum : "<<getsum(arr,n);
}