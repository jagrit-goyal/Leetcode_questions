class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>ans{{'I',1},{'V',5},{'X',10},{'L',50},
        {'C',100},{'D',500},{'M',1000}};

        int result = 0;
        for(int i=0;i<s.size();i++)
        {
            if(ans[s[i]] < ans[s[i+1]])
            {
                result -= ans[s[i]];
            }
            else
            result += ans[s[i]];
        }
        return result;
        
    }
};