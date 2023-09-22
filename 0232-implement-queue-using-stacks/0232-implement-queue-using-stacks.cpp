class MyQueue {
public:
    //Time complexity - O(n), SC - O(2*n)
        stack<int> s1;
        stack<int> s2;
    MyQueue() {
        int x;
        void push(int x);
        int pop(void);
        int peek(void);
        bool empty(void);
    }

    //push steps 
    //all elements of s1 ---> s2
    //push x to s1
    //all elements of s2 back to s1
    void push(int x) {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    //return s1.pop()
    int pop() {
        int s = s1.top();
        s1.pop();
        return s;
    }
    //s1.top()
    int peek() {
        return s1.top();
    }
    //check if s1 is empty() or not
    bool empty() {
        if(s1.empty())  return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */