// Problem link- https://leetcode.com/problems/merge-sorted-array/

// Solution 1: Adding elements of second matrix into first one and then sorting

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       if(n==0)
           return;
        if(nums1.size()==1 and n==1)
            nums1[0]=nums2[0];
        
        int j=0;
        for(int i=m;i<m+n;i++)
            {nums1[i]=nums2[j];j++;}
        sort(nums1.begin(),nums1.end());
    }
};

// Solution 2:
