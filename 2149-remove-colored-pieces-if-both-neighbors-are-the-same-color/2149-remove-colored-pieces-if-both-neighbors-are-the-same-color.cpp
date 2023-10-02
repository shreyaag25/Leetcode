class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size() == 1 || colors.size()==2)
            return false;
        int alice = 0, bob = 0;
        for(int i = 1; i<colors.size()-1; i++)
        {
            if(colors[i]==colors[i-1] && colors[i]==colors[i+1])
                if(colors[i]=='A')  
                    alice++;
                else
                    bob++;
        }
        if(alice- bob>=1)
            return true;
        else
            return false;
    }
};