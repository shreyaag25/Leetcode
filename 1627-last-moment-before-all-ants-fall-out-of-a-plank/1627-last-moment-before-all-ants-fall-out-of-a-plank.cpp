class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int a = 0, b = 0;
        if(left.size()>=1)
            a = *max_element(left.begin(), left.end());
        for(int num: right)
            b = max(b, n-num);
        return max(a,b);
    }
};