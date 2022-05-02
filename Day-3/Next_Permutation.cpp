// Problem link- https://leetcode.com/problems/next-permutation/

//Solution: Using built in function in cpp

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	vector<int> v;
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	
  //Using Built in function "next_permutation"
	next_permutation(v.begin(),v.end());
	
	for(int i=0;i<n;i++)
	cout<<v[i]<<" ";
	
	return 0;
}

