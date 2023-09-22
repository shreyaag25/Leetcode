class MyStack {
public:
/*
//using 2 queues - tc - O(n) , sc - O(2*n)
    queue<int> q1, q2;
    MyStack() {
        int x;
        void push(int x);
        int pop(void);
        int top(void);
        bool empty(void);
    }
    
    void push(int x) {
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int q = q1.front();
        q1.pop();
        return q;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())  return true;
        else    return false;
    }

    */

    //using 1 queues - tc - O(n) , sc - O(n)
    queue<int> q1;
    MyStack() {
        int x;
        void push(int x);
        int pop(void);
        int top(void);
        bool empty(void);
    }
    
    void push(int x) {
        q1.push(x);
        for(int i = 0 ;i<q1.size()-1; i++)
        {
            q1.push(q1.front());
            q1.pop();
        }

    }
    
    int pop() {
        int q = q1.front();
        q1.pop();
        return q;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())  return true;
        else    return false;
    }

};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */