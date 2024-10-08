class Solution {
private:
    string subStr(int l, int r, string s)
    {
        string str = "";
        for(int i = l; i <= r; i++)
        {
            str+=s[i];
        }
        
        return str;
    }
public:
    string longestPalindrome(string s) {
       int maxLen = 1;
        string ans ="";
        ans += s[0];
        for(int i = 0; i < s.size(); i++)
        {
            int l = i -1, r = i+1;
            int count = 1;
            while(l >= 0 && r < s.size() && s[l] == s[r])
            {
                count = count + 2;
                l--;
                r++;
            }
            
            if(count > maxLen)
            {
                maxLen = count;
                ans = subStr(l+1, r-1, s);
            }
            l = i;
            r = i+1;
            count = 0;
            while(l >= 0 && r < s.size() && s[l] == s[r])
            {
                count = count + 2;
                l--;
                r++;
            }
            if(count > maxLen)
            {
                maxLen = count;
                ans = subStr(l+1, r-1, s);
            }
        }
        
        return ans;
    }
};