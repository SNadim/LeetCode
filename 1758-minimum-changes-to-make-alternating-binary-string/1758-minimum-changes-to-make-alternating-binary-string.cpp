class Solution {
public:
    int minOperations(string s) {
        
        int count = 0, count1 = 1;
        string s1 = s;
        s1[0] = (s1[0] == '0') ? '1' : '0';
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i-1])
            {
                count++;
                s[i] = (s[i] == '0') ? '1' : '0';
            }
            if(s1[i] == s1[i-1])
            {
                count1++;
                s1[i] = (s1[i] == '0') ? '1' : '0';
            }
        }
        
        return min(count, count1);
    }
};