class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        set<string> st = {"+","-","*","/"};
        for(auto i : tokens)
        {
            if(st.find(i) != st.end())
            {
                int y = stk.top();
                stk.pop();
                int x = stk.top();
                stk.pop();                
                int calVal = calculate(x, y, i);                
                stk.push(calVal);
            }
            else
            {
                stk.push(stoi(i));
            }
        }
        
        return stk.top();
    }
    
private:
    int calculate(int x, int y, string op)
    {
        if(op == "+")
        {
            return x+y;
        }
        
        else if(op == "-")
        {
            return x-y;
        }
        
        else if(op == "*")
        {
            return x*y;
        }
        else
        {
            return x/y;
        }
        
    }
    
};