// Problem link-https://leetcode.com/problems/unique-paths/
// solution- Usimg Combinatorics

class Solution {
public:
    int uniquePaths(int m, int n) {
        int total_steps=m+n-2;
        int right_moves=m-1;
      
        double res=1;
        
        for(double i=1;i<=right_moves;i++)
        {
            res=res*(total_steps-right_moves +i)/i;
        }
        
        return (int)res;
    }
};
