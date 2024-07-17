class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int clsum = nums[0]+nums[1]+nums[2];

        for(int i=0;i<nums.size()-2;i++)
        {
            int left = i+1;
            int right = nums.size()-1;
            while(left<right)
            {
                int currsum = nums[i]+nums[left]+nums[right];
                if (currsum == target) {
                    return currsum; 
                }
            
                if (abs(currsum - target) < abs(clsum - target)) {
                    clsum = currsum; 
                }
                
                if (currsum < target) {
                    ++left; 
                } 
                else {
                    --right; 
                }
            }
        }
        return clsum;
    }
};