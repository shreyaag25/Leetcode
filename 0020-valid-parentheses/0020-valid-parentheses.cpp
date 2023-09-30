class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(s[0]==')' || s[0]==']' || s[0]=='}')
            return false;
        for(auto ch: s)
        {
            if(ch == '(' || ch == '{' || ch == '[') 
                stk.push(ch);
            else if(ch==')')
            {
                if(!stk.empty() && stk.top()=='(')
                    stk.pop();
                else    
                    stk.push(ch);
            }
            else if(ch=='}')
            {
                if(!stk.empty() && stk.top()=='{')
                    stk.pop();
                else    
                    stk.push(ch);
            }
            else if(ch==']' )
            {
                if(!stk.empty() && stk.top()=='[')
                    stk.pop();
                else    
                    stk.push(ch);
            }
        }
        if(stk.empty())
            return true;
        else 
            return false;
    }
};