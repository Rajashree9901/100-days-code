// Problem Link- https://leetcode.com/problems/merge-intervals/

// Solution

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        
        sort(i.begin(),i.end());
        
        int l=i[0][0];
        int r=i[0][1];
        
        vector<vector<int>> v;
        
        for(int j=1;j<i.size();j++)
        {
            if(r>=i[j][0])
            {
                if(r<i[j][1])
                    r=i[j][1];
            }
            else
            {
                vector<int>h;
                h.push_back(l);
                h.push_back(r);
                v.push_back(h);
                l=i[j][0];
                r=i[j][1];
            }
        }
        
        vector<int>h;
        h.push_back(l);
        h.push_back(r);
        v.push_back(h);
        return v;
    }
};
