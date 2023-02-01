#include<iostream>
using namespace std;

bool linear(int *arr,int size,int key)
{
    if(size<0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return arr;
    }
    return linear(arr+1,size-1,key);

}
 
int main()
{
    int arr[]={5,2,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    bool ans=linear(arr,size,key);
        
    if(ans)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}