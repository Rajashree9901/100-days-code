// Problem Link- https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1/#

// Solution-1: Brute force: O(n^2), Using 2 loops

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long c=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            if(arr[i]>arr[j])
            c++;
        }
    return c;
    }

};

// Driver Code 

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  



// Solution-2: O(nlogn), Using merge sort

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int merge(long long arr[],long long t[],long long l,long long m,long long r)
    {
        long long c=0;
        long long i=l,j=m,k=l;
        
        while(i<=m-1 and j<=r)
        {
            if(arr[i]<=arr[j])
            t[k++]=arr[i++];
            else
            {
                t[k++]=arr[j++];
                c+=m-i;
            }
        }
        
        while(i<=m-1)
        t[k++]=arr[i++];
        
        while(j<=r)
        t[k++]=arr[j++];
        
        for(i = l ; i <= r ; i++)
        arr[i] = t[i];
        
        return c;
    }
    
    long long int mergesort(long long arr[],long long t[],long long l,long long r) 
    {
        long long m, c=0;
        
        if(r>l)
        {
            m=(l+r)/2;
            c+=mergesort(arr,t,l,m);
            c+=mergesort(arr,t,m+1,r);
            
            c+=merge(arr,t,l,m+1,r);
        }
        
        return c;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long l=0,r=N-1;
        long long t[N];
        long long c=mergesort(arr,t,l,r);
        return c;
    }

};

//  Driver Code 

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  
