// Problem link- https://leetcode.com/problems/two-sum/

// Solution - Time complexity: O(n) 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])==m.end())
            {
                m[nums[i]]=i;
            }
            else
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                break;
            }
        }
        return v;
        
    }
};
