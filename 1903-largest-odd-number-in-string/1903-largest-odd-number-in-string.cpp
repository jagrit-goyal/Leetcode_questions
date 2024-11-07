class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int right =n-1;

        if((num[right]-'0')%2!=0)
        return num;

        for(int i =right ;i>=0;i--)
        {
            if((num[i]-'0')%2!=0)
            {
                return num.substr(0,i+1);
            }
        }
        return "";

    }
};