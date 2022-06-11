// Problem link- https://leetcode.com/problems/4sum/

// Solution - 

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        vector<vector<int>>vec;
        if(nums.size()<4)
            return vec;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                // vector<int>v;
                int tar=t-nums[i]-nums[j];
                int front=j+1;
                int back=nums.size()-1;
                while(front<back)
                {
                    if(nums[front]+nums[back]<tar)
                        front++;
                    else if(nums[front]+nums[back]>tar)
                        back--;
                    else
                    {
                        vector<int> v(4,0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[front];
                        v[3]=nums[back];
                        vec.push_back(v);
                        
                        while (front < back && nums[front] == v[2]) ++front;
        
                        while (front < back && nums[back] == v[3]) --back;
                    }
                }
                while(j+1<nums.size() and nums[j+1]==nums[j])
                    j++;
            }
            while(i+1<nums.size() and nums[i+1]==nums[i])
                    i++;
        }
        return vec;
    }
};
