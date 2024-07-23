class Solution {
public:
    string multiply(string num1, string num2) {
        // string ans = "";
        // int sum =0;
        // int x =0; 
        // for(int i=num1.length()-1;i>=0;i--)
        // {
        //     int carry =0;
        //     int ans=0;
        //     for(int j=num2.length()-1;j>=0;j--)
        //     {
        //         if(j==0)
        //         {
        //             ans = ans+ (num1[i]*num2[j]) + carry;
        //             break;
        //         }
        //         ans = ans+ (num1[i]*num2[j])%10 + carry;
        //         carry = (num1[i]*num2[j])/10;
        //     }
        //     sum = sum + ans* pow(10,x);
        //     x++;
        // }
        // while(sum>0)
        // {
        //     ans = ans + to_string(sum%10);
        //     sum = sum/10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
        //error in answers

        
        int m = num1.size();
        int n = num2.size();
        vector<int> result(m + n, 0); // Initialize vector to store results
        
        // Multiply each digit and add to result vector
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];
                
                result[i + j] += sum / 10;
                result[i + j + 1] = sum % 10;
            }
        }
        string ans;
        for (int num : result) {
            if (!(ans.empty() && num == 0)) {
                ans.push_back(num + '0');
            }
        }
        
        return ans.empty() ? "0" : ans;
    }
};