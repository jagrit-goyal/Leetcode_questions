class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> sumMap;
    int currentSum = 0;
    int count = 0;
    
    sumMap[0] = 1;
    
    for (int num : nums) {
        currentSum += num;
        
        if (sumMap.find(currentSum - k) != sumMap.end()) {
            count += sumMap[currentSum - k];
        }
        
        sumMap[currentSum]++;
    }
    
    return count;
    }
};