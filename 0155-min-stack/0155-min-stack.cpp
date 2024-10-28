class MinStack {
public:    
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!minS.empty())
        {
            int topVal = minS.top();
            minS.push(min(topVal, val));
        }
        else
            minS.push(val);
    }
    
    void pop() {
        st.pop();
        minS.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minS.top();
    }
    
    private:
        stack<int> minS;
        stack<int> st;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */