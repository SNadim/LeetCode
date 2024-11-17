class Solution {
public:
    bool isValid(string s) {
        map<char, char> mp = {{')', '('}, {'}','{'}, {']','['}};

        stack<char> st;
        for(auto i : s)
        {
            if(mp.find(i) != mp.end())
            {
                if(!st.empty())
                {
                    if(st.top() == mp[i])
                    {
                        st.pop();
                    }
                    else return false;
                }
                else
                {
                    return false;
                }                
            }
            else 
            {
                st.push(i);
            }
        }

        return st.empty();        
    }
};