class MyQueue {
public:

    /*
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

    */


        //tc - o(1) amortised && sc - O(2*n)
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
    //push to s1
    void push(int x) {
       s1.push(x);
    }
    
    //if(s2 not empty) --> s2.pop()
    //else ---> (all elements of s1 to s2 and s2.pop())
    int pop() {
        if(!s2.empty())
        {
            int s = s2.top();
            s2.pop();
            return s;
        }
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            int s = s2.top();
            s2.pop();
            return s;
        }
    }
    
    //if(s2 not empty) --> s2.top()
    //else ---> (all elements of s1 to s2 and s2.top())
    int peek() {
        if(!s2.empty())
        {
            return s2.top();
        }
        else
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }

    //check if s1 or s2 is empty() or not
    bool empty() {
        if(s1.empty() && s2.empty())  return true;
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