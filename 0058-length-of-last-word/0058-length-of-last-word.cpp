class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int i=s.size()-1;
        int k=i;
        for(;i>=0;i--)
        {
            if(s[i]==' ')
            k--;

            else
            break;
        }
        for(;k>=0;k--)
        {
            if(s[k]==' ')
            break;
            count++;
        }
        return count;
    }
};