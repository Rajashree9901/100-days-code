// Problem Link- https://leetcode.com/problems/maximum-subarray/submissions/

// Solution 1- Time Complexity:O(N^2) 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        int n=nums.size();
        
        int sum=0,max=nums[0];
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(max<sum)
                max=sum;
            }
        }
        return max;
    }
};


// Solution 2- Time Complexity:O(N)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        int n=nums.size();
        
        int sum=0,max=nums[0];
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(max<sum)
                max=sum;
            if(sum<0)
                sum=0;
            
        }
        return max;
    }
};
