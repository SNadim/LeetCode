class Solution {
public:
    int maxScore(string s) {
        if(s.size() == 2 && s[0] == '0' && s[1] == '0') return 1;
        if(s.size() == 2 && s[0] == '1' && s[1] == '1') return 1;
        int i = 1, j = s.size()-2;
        vector<int>zeros(s.size(), 0);
        vector<int>ones(s.size(), 0);

        if(s[0] == '0') zeros[0] = 1;
        if(s[s.size()-1] == '1') ones[s.size()-1] = 1;

        while(i < s.size())
        {
            if(s[i] == '0') zeros[i] = zeros[i-1] + 1;
            else zeros[i] = zeros[i-1];            
            if(s[j] == '1') ones[j] = ones[j+1] + 1;
            else ones[j] = ones[j+1];
            i++;
            j--;
        }
        int ans = 0;
        for(int i = 0; i < s.size()-1; i++)
        {            
            ans = max(ans, zeros[i]+ones[i+1]);
        }

        return ans;
    }
};