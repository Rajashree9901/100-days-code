// Problem link- https://binarysearch.com/problems/Longest-Substring-with-2-Distinct-Characters
// Solution- Two pointers and hashmap, O(n) approach

int solve(string s) {
    if(s.length()<2)
    return s.length();


    unordered_map<char,int> mp;
    int i=0,j=0,l=0,m=0;

    while(j<s.length())
    {
        mp[s[j]]++;
        l++;

        if(mp.size()>2)
        {
            while(mp.size()>2)
            {
                mp[s[i]]--;
                if(mp[s[i]]<1)
                mp.erase(s[i]);
                l--;
                i++;
            }
        }
        else
        m=max(l,m);

        j++;
    }

    return m;
}
