class Solution {
public:
    string intToRoman(int num) {
        //tc - O(1)
        //space - O(1)
        vector<pair<int, string>> mapping = {{1000, "M"},{900, "CM"},{500, "D"},{400, "CD"},{100, "C"},{90, "XC"},{50, "L"},{40, "XL"},{10, "X"},{9, "IX"},{5, "V"},{4, "IV"},{1, "I"}};
        string roman = "";
        for(auto np : mapping)
        {
            int n = np.first;
            string r = np.second;
            while(num>=n)
            {
                roman += r;
                num -= n;
            }
        }
        return roman;
    }
};