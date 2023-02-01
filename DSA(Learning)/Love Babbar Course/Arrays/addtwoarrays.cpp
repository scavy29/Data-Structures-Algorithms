#include <bits/stdc++.h> 
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v)
{
    int s=0,e=v.size()-1;
    while(s<e)
    {
        swap(v[s],v[e]);
        s++;e--;
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int>ans;
    
    int i=n-1;
    int j=m-1;
    int carry=0;
    
    while(i>=0 && j>=0)
    {
        int a1=a[i];
        int b1=b[j];
        int sum=a1+b1+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
        
    }
    
    while(i>=0)
    {
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    
    while(j>=0)
    {
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
//     return ans;
}