class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans =INT_MIN;
        long long sum =0;
        
        for(int num:nums)
        {
            sum += num;
            
            if(sum>ans)
                ans = sum;
            
            if(sum<0)
                sum=0;
        }
        return ans;
    }
};