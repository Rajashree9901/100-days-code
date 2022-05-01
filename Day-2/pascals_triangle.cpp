//Problem link- https://leetcode.com/problems/pascals-triangle/submissions/

//Solution

class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> pascal;
        
        if(n==0)
            return pascal;
        
       //creating first row: [1]
        vector<int> vec;
        vec.push_back(1);
        
        pascal.push_back(vec);
        
        int i,j;
      
        // Updating further rows 
        for(i=1;i<n;i++)
        {
            vector<int> v;
            v.push_back(1);
            for(j=1;j<=i-1;j++)
                v.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            v.push_back(1);
            pascal.push_back(v);
        }
        
        return pascal;
    }
};
