class Solution {
public:
    int myAtoi(string s) {
        int n = 0;
        int sign = 1;
        int i =0;
        while(i<s.size() && s[i]==' ')
            i++;
        if(i<s.size() && (s[i]=='-' || s[i]=='+'))
        {
            if(s[i]=='-')   sign = -1;
            i++;
        }
        while(i<s.size() && s[i]>='0' && s[i]<='9')
        {
            if(n> INT_MAX/10 || (n==INT_MAX/10 && s[i]-'0' >7))
                return (sign==-1)? INT_MIN: INT_MAX;
            n = n*10+ (s[i]-'0');
            i++;
        }
        return n*sign;
    }
};