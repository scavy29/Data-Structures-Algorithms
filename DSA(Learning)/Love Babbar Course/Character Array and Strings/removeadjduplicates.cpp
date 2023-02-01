#include<iostream>
#include<vector>
using namespace std;

string removeDuplicates(string S) {
	string sRes = "";
	for (const auto& c : S) {
		if (!sRes.empty() && sRes.back() == c)
			sRes.pop_back();
		else
			sRes.push_back(c);
	}
    cout<<sRes;
}

int main()
{
    string s="xyyz";
    removeDuplicates(s);
}