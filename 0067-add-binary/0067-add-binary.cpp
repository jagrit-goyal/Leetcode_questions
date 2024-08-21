class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i= a.size()-1;
        int j = b.size()-1;
        int carry=0;
         while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0'; // char to int
            if (j >= 0) sum += b[j--] - '0';

            ans += (sum % 2) + '0'; // int to char
            carry = sum / 2;
        }

        reverse(ans.begin(), ans.end()); 
        return ans;
    }
};