class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //inc order
        if(nums.empty())
        return 0;

        int unique = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[unique++] = nums[i];
            }
        }
        return unique;

    }
};