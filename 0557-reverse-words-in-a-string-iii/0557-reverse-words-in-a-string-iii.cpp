class Solution {
public:
    string reverseWords(string s) {
        int j=0,i;  //j to keep track of a start of a new word
        for(i=0;i<=s.size();i++)
        {
            if(s[i]==' ' || s[i]=='\0')
            {
                reverse(s.begin()+j,s.begin()+i);  //when words end, reverse it from beginning of word, to end
                j=i+1; //move to start of next word
            }
        }

        return s;

    }
};