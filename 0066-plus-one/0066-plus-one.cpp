class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;

        if (digits[i] == 9) {
            digits[i] = 0;
            for (int j = i - 1; j >= 0; j--) {
                if (digits[j] != 9) {
                    digits[j]++;
                    return digits;
                } else {
                    digits[j] = 0;
                }
            }
            digits.insert(digits.begin(), 1);
        } else {
            digits[i]++;
        }

        return digits;
    }
};
