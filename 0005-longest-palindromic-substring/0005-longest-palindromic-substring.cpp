class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty() || s.size()==1) return s;

        string longest;
        for(int i=0;i<s.size();i++)
        {
            string odd = helper(s,i,i);
            if(odd.size()>longest.size())
            {
                longest = odd;
            } 

            string even = helper(s,i,i+1);
            if(even.size()>longest.size())
            {
                longest = even;
            }
        }
        return longest;

    }
    string helper(string &s , int left , int right)
    {
        while(left>=0 && right <s.size()&& s[left] == s[right])
        {
            left--;
            right++;
        }
        return s.substr(left+1 , right-left-1);
    }
};