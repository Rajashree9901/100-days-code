// https://leetcode.com/problems/set-matrix-zeroes/submissions/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> s1, s4;
        int m=matrix.size();
        int n= matrix[0].size();
        
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
