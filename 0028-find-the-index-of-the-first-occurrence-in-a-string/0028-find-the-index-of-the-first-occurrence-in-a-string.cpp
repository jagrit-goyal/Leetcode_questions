class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
       
        string ans ="";
        while(i<haystack.length()&& j<needle.size())
        {
            if(needle[j] == haystack[i])
            {
                ans = ans + haystack[i];
                i++;
                j++;
            }
            else{
                i -= ans.size() - 1;
                j = 0;
                ans = "";
            }
        }
        if(ans==needle)
        return i-ans.size();
        else 
        return -1;
    }
};