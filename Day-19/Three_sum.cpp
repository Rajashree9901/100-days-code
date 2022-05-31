// Problem link- https://leetcode.com/problems/3sum/

// Solution- O(n^2(log n)) approach using 2sum approach and binary search

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec;
        set<vector<int>> s;
        
        
        if(nums.size()<3)
            return vec;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int target=-nums[i];
           
            if(i>0 and nums[i]==nums[i-1])
                continue;
            else
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(binary_search(nums.begin()+j+1,nums.end(),target-nums[j]))
                    {
                         vector<int> v;
                        v.push_back(-target);
                        v.push_back(target-nums[j]);
                        v.push_back(nums[j]);
                        s.insert(v);
                    }    
                }
            }
        }
        
        for(auto i:s)
            vec.push_back(i);
        
        return vec;
    }
};
