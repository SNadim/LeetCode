class Solution {
public:
    string minWindow(string s, string t) {
    if(t.size() > s.size()) return "";
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;    
    for(auto i : t) mp1[i]++;
    int x = mp1.size();    
    int l = 0, r = 0;
    int match = 0;
    int minLen = s.size()+1;    
    pair<int, int> st;
    while(r < s.size())
    {
        mp2[s[r]]++;
        char c = s[r];
        if(mp1.count(c) && mp2[c] == mp1[c])
        {
            match++;
        }
        while(match == x)
        {
            if(minLen > (r-l+1))
            {
                minLen = r-l+1;
                st = {l, r-l+1};                
            }
             mp2[s[l]]--;
            if(mp2.count(s[l]) && mp2[s[l]] < mp1[s[l]])
            {
                match--;
            }
            l++;
        }
        r++;
    }
    
    return s.substr(st.first, st.second);
}

};