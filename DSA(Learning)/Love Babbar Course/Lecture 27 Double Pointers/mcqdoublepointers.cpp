#include<iostream>
using namespace std;

/* 1st
int main()
{
    int first=8;
    int second=18;
    int *ptr=&second;
    *ptr=9;
    cout<<first<<" "<<second<<endl;
}
*/

/* second
int main()
{
    int first=6;
    int *p=&first;
    int *q=p;
    (*q)++;
    cout<<first<<endl;
}

*/

/* Third
int main()
{
    int first=8;
    int *p=&first;
    cout<<(*p)++<<endl;
    cout<<first<<endl;
}
*/

/* Fourth
int main()
{
    int *p=0;
    int first=110;
    *p=first;       //Will cause an error since we have declared it as NULL in the beginning
    p=&first;          //Right way
    cout<<*p<<endl;
}
*/

/* Fifth
int main()
{
    int first=8;
    int second=11;
    int *third=&second;
    first=*third;
    *third=*third+2;
    cout<<first<<" "<<second<<endl;
}
*/

/* Six
int main()
{
    float f=12.5;
    float p=21.5;
    float *ptr=&f;
    (*ptr)++;
    *ptr=p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl;
}
*/

/* Seven
int main()
{
    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
}
*/

/* Eight
int main()
{
    int arr[]={11,12,13,14};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;
}
*/

/* Nine 
int main()
{
    int arr[6]={11,12,31};
    cout<<arr<<" "<<&arr<<endl;
}
*/


/* ten
int main()
{
    int arr[6]={11,12,31};
    cout<<(arr+1)<<endl;
}
*/

/* 11th
int main()
{
    int arr[6]={11,12,31};
    int *p=arr;
    cout<<p[2]<<endl;
}
*/

/* twelve
int main()
{
    int arr[]={11,12,13,14,15};
    cout<<*(arr)<<" "<<*(arr+3);
}
*/

/* 13th
int main()
{
    int arr[]={11,21,31,41};
    int *ptr=(arr)++;
    cout<<*ptr<<endl;
}
 */

/* 14th
int main()
{
    char ch = 'a';
    char *ptr=&ch;
    ch++;
    cout<<*ptr<<endl;
}
*/

/* 15th 
int main()
{
    char arr[]="abcde";
    char *p=&arr[0];
    p++;
    cout<<p<<endl;
}
*/


/* 16th 
int main()
{
    char str[]="babbar";
    char *p=str;
    cout<<str[0]<<" "<<p[0]<<endl;
}
*/

/* 17th 
void update(int *p)
{
    *p=(*p)*2;
}

int main()
{
    int i=10;
    update(&i);
    cout<<i<<endl;
}
*/

/* 18th 
int main()
{
    int first=110;
    int *p=&first;
    int **q=&p;
    int second=(**q)++ + 9;
    cout<<first<<" "<<second<<endl;
}
*/

/* 19th 
int main()
{
    int first=100;
    int *p=&first;
    int **q=&p;
    int second=++(**q);
    int *r=*q;
    ++(*r);
    cout<<first<<" "<<second<<endl;
}
*/

/* 20th 
void increment(int **p)
{
    ++(**p);
}
int main()
{
    int num=110;
    int *ptr=&num;
    increment(&ptr);
    cout<<num<<endl;
}
*/