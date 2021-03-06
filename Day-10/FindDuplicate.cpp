// Problem link- https://leetcode.com/problems/find-the-duplicate-number/

// Solution 1: Using sorting

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
//       sorting
        sort(nums.begin(),nums.end());
//       finding the duplicate by traversing the array
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -1;
    }
};

// Solution 2: Using map to store frequency

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;           //increasing frequency
            if(m[nums[i]]==2)
                return nums[i];
        }
        return -1;
    }
};
