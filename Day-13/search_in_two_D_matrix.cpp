// Problem link- https://leetcode.com/problems/search-a-2d-matrix/

// Solution- O(m+n), first search for the row containing target and then searching for the target.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==1)
        {
            for(int i=0;i<n;i++)
                if(matrix[0][i]==target)
                    return true;
            return false;
        }
        
        int i=0;
        while(target>=matrix[i][0])
        {
            i++;
            if(i>=m)
                break;
        }
        
        if(i==0)
            return false;
        
        for(int j=0;j<n;j++)
        {
            if(matrix[i-1][j]==target)
                return true;

        }
        
        return false;
        
    }
};
