#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>nums={0,1,0,3,12};
    int count=0;
    // sort(nums.begin(),nums.end());
    vector<int>n;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            count++;
        }

        if(nums[i]!=0)
        n.push_back(nums[i]);
    }

    for(int i=nums.size()-1;i>count;i--)
    {
        if(count>0)
        {
        n.push_back(0);
        }
        else
        {
            break;
        }
    }
    
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
    }
}

