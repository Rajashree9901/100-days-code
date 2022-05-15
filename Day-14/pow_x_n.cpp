// Problem link- https://leetcode.com/problems/powx-n/

// Solution-1: Using inbuilt pow function
class Solution {
public:
    double myPow(double x, int n) {
        double p= pow(x , double(n) );
        return p;
    }
};

// Solution 2: Using for loop to loop over the power, O(n) approach
class Solution {
public:
    double myPow(double x, int n) {
        double p=1;
        if(n>0)
        {
            for(int i=0;i<n;i++)
                p=x*p;
            return p;
        }
        if(n==0)
            return p;
        for(int i=0;i<abs(n);i++)
            p=x*p;
        p=1/p;
        return p;
    }
    
};

// Solution 3: O(log n) approach
class Solution {
public:
    double myPow(double x, int n) {
        double p=1;
        long long nn=n;
        if(nn<0)
            nn*=-1;
        while(nn)
        {
            if(nn%2)
            {
                p*=x;
                nn-=1;
            }
            else
            {
                x*=x;
                nn=nn/2;
            }
        }
        if(n>0)
            return p;
        else
            return 1/p;
    }
    
};
