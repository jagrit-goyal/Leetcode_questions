class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        if(x>0 && x%10 ==0) return false;
        
        else{
            long int  r = 0;
            int original = x;
            while(x>0)
            {
                r = r*10 +x%10;
                x = x/10;
            }
            return original==r;

        }
    }
};