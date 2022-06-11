// Problem link - https://leetcode.com/problems/longest-consecutive-sequence/

// Solution - O(n) Solution using set and find function

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==0)
            return 0;
        if (n==1)
            return 1;
        
        int m=0;
        
        set<int> s;
        
        for(int i=0;i<n;i++)
            s.insert(nums[i]);
        
        for(auto it: s)
        {
            if(s.find(it-1)==s.end())
            {
                int itr=it+1;
                while(s.find(itr)!=s.end())
                    itr++;
                
                int c=itr-it;
                m=max(m,c);
            }
        }
        return m;
    }
};
