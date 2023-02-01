#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(6);
    v.push_back(2);
    v.push_back(6);

    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=10,c=90;
    cout<<"Max: "<<max(a,c)<<endl;
    cout<<"Min: "<<min(a,c)<<endl;

    swap(a,c);
    cout<<a<<" "<<c<<endl;

    string str="Vikrant";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    // vector<int>v={1,2,3,4,5};
    rotate(v.begin(),v.begin()+5,v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
}
 