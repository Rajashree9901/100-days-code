// Problem link- https://leetcode.com/problems/next-permutation/

//Solution 1: Using built in function in cpp

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


// Solution 2: Without using built in function in cpp

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
	
	int id1,id2;
	for(int i=n-2;i>=0;i--)
	{
	    if(v[i]<v[i+1])
	    {id1=i;break;}
	}
	
	for(int i=n-1;i>id1;i--)
	{
	    if(v[i]>v[id1])
	    {
	        id2=i;
	        break;
	    }
	}
	
	if(id1>=0 and id2>=0)	
	swap(v[id1],v[id2]);

	reverse(v.begin() + id1 +1, v.begin() + n);
	
	for(int i=0;i<n;i++)
	cout<<v[i]<<" ";
	
	
	return 0;
}

