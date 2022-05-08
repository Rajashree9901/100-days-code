// Problem link- https://leetcode.com/problems/merge-sorted-array/

// Solution 1: AUsing an extra space of O(m+n)

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

// Solution 2: Without using extra space

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       if(n==0)
           return;
        if(nums1.size()==1 and n==1)
            nums1[0]=nums2[0];
        
        for(int i=0;i<m;i++)
        {
            if(nums1[i]>nums2[0])
            {
                int t=nums1[i];
                nums1[i]=nums2[0];
                nums2[0]=t;
            }
            
//             sorting to insert the first element at it's correct place
            for(int j=0;j<n-1;j++)
            {
                if(nums2[j]>nums2[j+1])
                {
                    int t=nums2[j];
                    nums2[j]=nums2[j+1];
                    nums2[j+1]=t;
                }
                else
                    break;
            }
        }
        
//         merging arrays
        int j=0;
        for(int i=m;i<m+n;i++)
        {
            nums1[i]=nums2[j];
            j++;
        }
    }
};
