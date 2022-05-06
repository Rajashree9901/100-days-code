// Problem link- https://leetcode.com/problems/rotate-image/

// Solution- First doing Transpose and then swapping columns

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
       // Transposing the matrix
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<n;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
        
      // Swapping columns
        for(int j=0;j<n/2;j++)
        {
            for(int i=0;i<m;i++)
                swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }
};
