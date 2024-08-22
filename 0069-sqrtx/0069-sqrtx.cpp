class Solution {
public:
    int mySqrt(int x) {
        // return pow(x,0.5);
        if(x==0||x==1)
        return x;
        int l=0;
        int r=x;
        int ans =0;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(mid<=x/mid)
            {
                ans =mid;
                l = mid+1;
            }
            else
            r = mid-1;
        }
        return ans;

    }
};