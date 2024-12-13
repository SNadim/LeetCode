class Solution {
public:
    bool backspaceCompare(string s, string t) {
    return helper(s) == helper(t);
    }

private:
    string helper(string s)
{
    stack<char> st;
    for(auto i : s)
    {
        if(i != '#')
        {
            st.push(i);
        }
        else if(!st.empty())
        {
            st.pop();
        }
    }
    
    string ans = "";
    while(!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
};