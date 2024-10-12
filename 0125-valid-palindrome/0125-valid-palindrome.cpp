class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        string s2 = "";
        for(int i = s.size()-1, j = 0; i >=0; i--, j++)
        {
            if(isalnum(s[i]))
            {
                s1 += tolower(s[i]);
            }
            
            if(isalnum(s[j]))
            {
                s2 += tolower(s[j]);
            }
        }
                
        return s1 == s2;        
    }
};