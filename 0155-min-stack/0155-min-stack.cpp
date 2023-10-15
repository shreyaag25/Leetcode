class MinStack {
public:
    stack<int> stk;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minStack.empty() || val<=minStack.top())
            minStack.push(val);
    }
    
    void pop() {
        int t = stk.top();
        stk.pop();
        if(minStack.top()==t)
            minStack.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */