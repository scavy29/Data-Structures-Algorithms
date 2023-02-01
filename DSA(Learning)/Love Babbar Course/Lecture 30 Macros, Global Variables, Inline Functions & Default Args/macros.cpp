// #include<iostream>
// #define pi 3.14
// #define MAX 10
// using namespace std;

/*
int main()
{
    int n;
    cin>>n;
    if(n>MAX)
    {
        cout<<"Greater than "<<MAX;
    }
    else{
        cout<<"Less than "<<MAX;
    }
}
*/

/*
int main()
{
    int r;
    // int pi=22/7;
    cin>>r;
    float area=pi*(r*r);
    cout<<area;
}
*/
/*
#include<iostream>
#define area(l,b) (l*b)
using namespace std;

int main()
{
    int l,b;
    cin>>l>>b;
    cout<<"Area: "<<area(l,b);
}
*/

/*  Object like Macro
#include<iostream>
using namespace std;
#define DATEUG 29
#define DATEPG 31

int main()
{
    cout<<"Admission Date for UG ends on: "<<DATEUG<<"/11/22"<<endl;
    cout<<"Admission Date for PG ends on: "<<DATEPG<<"/12/22";
}
*/

/* Chain Macro
#include<iostream>
using namespace std;
#define IG FOLLOWERS
#define FOLLOWERS 99

int main()
{
    cout<<"GFG has "<<IG<<"k Followers on Instagram"<<endl;
}
*/

/* Multi Line
#include<iostream>
#define defaultarr 1,\
            2,\
            3
using namespace std;

int main()
{
    int arr[]={defaultarr};
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/

/* Function Like
#include<iostream>
#define min(a,b) (((a)<(b))?(a):(b))
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<" Minimum Number: "<<min(a,b);
}
*/

