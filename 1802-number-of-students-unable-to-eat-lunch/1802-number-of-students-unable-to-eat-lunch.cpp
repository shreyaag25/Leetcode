class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int able = 0;
        int n = students.size();
        stack<int> s;
        queue<int> q;
        int ask = 0;
        bool done = false;
        for(int i=n-1; i>=0; i--)
            s.push(sandwiches[i]);
        for(int i =0;i<n;i++)
            q.push(students[i]);
        while(!done)
        {
            if(q.empty())
                return 0;
            else if(q.size() == ask)
                return ask;
            else if(q.front()==s.top())
            {
                s.pop();
                q.pop();
                ask = 0;
            }
            else
            {
                int t = q.front();
                q.pop();
                q.push(t);
                ask++;
            }
        }
        return q.size();
    }
};