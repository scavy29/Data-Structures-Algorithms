#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>res;
    int A[6]={1,2,2,2,3,4};
    int B[4]={2,2,3,3};
    int n=6,m=4,i=0,j=0;
    while(i<n && j<m)
    {
        res.push_back(A[i]);
        i++;
        j++;
    }

    if(A[i]>B[j])
    {
        j++;
    }

    else{
        i++;
    }

    // return res;
}