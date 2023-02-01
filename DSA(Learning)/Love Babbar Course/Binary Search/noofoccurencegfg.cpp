//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int binarysearch(int arr[],int n,int x)
	{
	    int s=0,e=n-1;
	    int m=s+(e-s)/2;

	        if(arr[m]==x)
	        {
                return s;
	        }
	        else if(arr[m]<x)
	        {
	            s=m+1;
	        }
	        else
	        {
	            e=m-1;
	        }
	       m=s+(e-s)/2;
	    
	}
	
	int occurence(int arr[],int n,int x)
	{
	    int i=binarysearch(arr,n,x);                //for determining the index
	   

	   
	    int count=1;
	    int end=i-1;

	    while(end>=0 && arr[end]==x)
	    {
	        count++;
	        end--;
	    }
	    int start=i+1;
	    while(start<n && arr[start]==x)
	    {
	        count++;
	        start++;
	    }
	    return count;
	}
	
	int count(int arr[], int n, int x) {
	    // code here
	    return occurence(arr,n,x);
	}
};