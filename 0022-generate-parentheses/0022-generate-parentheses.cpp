class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        helper(n,0,0,"",result);
        return result;
            
    }
    
    void helper(int n, int open , int close , string current , vector<string>&result)
    {
        if(current.size()==n*2)
        {
            result.push_back(current);
            return;
        }
        
        if(open<n)
        {
            helper(n, open+1 , close, current+"(", result);
        } 
        if(close<open)
        {
            helper(n ,open , close+1 , current+")", result);
        }
    }
};