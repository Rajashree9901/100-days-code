//Problem link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// Solution 1: Using 2 pointers

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0 or n==1)
            return 0;
        
        int i=0,j=0,m=0;
        while(j<n-1)
        {
            j++;
            if(prices[j]<prices[i])
                i=j;
            else
            {
                if(m<(prices[j]-prices[i]))
                    m=(prices[j]-prices[i]);
            }
        }
        return m;
    }
};

// Solution 2: Maintaing minimum price and then calculating maximum profit

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0 or n==1)
            return 0;
        
        int p=INT_MAX;
        int m=0;
        
        for(int i=0;i<n;i++)
        {
            p=min(p,prices[i]);
            m=max(m,prices[i]-p);
        }
        return m;
    }
};
