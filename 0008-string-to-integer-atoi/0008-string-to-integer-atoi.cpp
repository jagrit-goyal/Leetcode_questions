class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        for(;i<s.length()&&s[i]==' ';i++);

        int sign = 1;
        if(i<s.length()&& (s[i]=='+' || s[i]=='-'))
        {
            sign = (s[i]=='-')? -1 : 1;
            i++;
        }
        long num =0;

        while(i<s.length() && isdigit(s[i]) && num<=INT_MAX)
        {
            num = num*10 + (s[i++] - '0');
        }
        // for rounding off wala part
        num = max(sign*num , (long)INT_MIN);
        num = min(num , (long)INT_MAX);
        return (int)num;
    }
};