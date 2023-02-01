#include<iostream>
using namespace std;

int main()
{
    /*
    int arr[4]={1,3,4};
    cout<<"Address of First Block: "<<arr<<endl;
    cout<<"Address of First Block: "<<&arr[0]<<endl;
    cout<<"Value of First Block: "<<*arr<<endl;
    cout<<"Value of Second Block: "<<*arr+1<<endl;
    cout<<"Value of Third Block: "<<*(arr+1)<<endl;
    cout<<"Value of Third Block: "<<(*arr)+10<<endl;

    int i=2;
    cout<<i[arr]<<endl;

    int temp[10];
    int *ptr=&temp[0];
    cout<<sizeof(temp)<<" "<<sizeof(ptr)<<endl;
    */

   char ch[10]="vikrant";
   cout<<"Original: "<<ch<<endl;
   char *str=&ch[0];
   cout<<str<<" "<<*str<<" "<<&str<<endl;
   cout<<str<<" "<<*str<<" "<<&str[0]<<endl;

   char name = 'v';
   char *temp=&name;
   cout<<temp<<endl;            //Does not stop until Null Char is found
   
}
