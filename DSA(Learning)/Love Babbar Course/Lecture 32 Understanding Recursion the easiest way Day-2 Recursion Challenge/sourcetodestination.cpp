#include<iostream>
using namespace std;

void reachhome(int src,int dest)
{
    cout<<"Source: "<<src<<" "<<"Destination: "<<dest<<endl; 
    //Base Case
    if(src==dest)
    {
        cout<<"Reached!!!!"<<endl;
        return ;
    }

    //One step at a time
    src++;

    //Recursive Call
    reachhome(src,dest);

}

int main()
{
    int src,dest;
    cin>>src>>dest;
    reachhome(src,dest);
}