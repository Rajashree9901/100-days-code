// Problem link
// https://leetcode.com/problems/set-matrix-zeroes/submissions/


// Solution

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> s1, s4;
        int m=matrix.size();
        int n= matrix[0].size();
        
        //inserting rows having 0 in s1 and columns having 0 in s4
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    s1.insert(i);
                    s4.insert(j);
                }
            }
        }
        
        set<int> :: iterator itr;
        
        // traversing through s1 and s4 to set value 0 in matrix
        
        for(itr=s1.begin();itr!=s1.end();itr++)
        {
            for(int j=0;j<n;j++)
                matrix[*itr][j]=0;
        }
        
        for(itr=s4.begin();itr!=s4.end();itr++)
        {
            for(int i=0;i<m;i++)
                matrix[i][*itr]=0;
        }
    }
};
