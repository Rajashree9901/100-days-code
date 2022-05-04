// Problem link- https://leetcode.com/problems/sort-colors/

// solution 1: Using frequency

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
      
//       traversing to count the frequency
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                o++;
            else
                t++;
        }
        int i;
      
//       Assigning values in array at it's correct place
        for(i=0;i<z;i++)
            nums[i]=0;
        for(i=z;i<z+o;i++)
            nums[i]=1;
        for(i=z+o;i<z+o+t;i++)
            nums[i]=2;
    }
};
