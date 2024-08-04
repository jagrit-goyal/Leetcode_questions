class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0; 
        int j = 0; 
        
        while (i < n) {
            char currentChar = chars[i];
            int count = 0;
            
            while (i < n && chars[i] == currentChar) {
                i++;
                count++;
            }
            
            chars[j++] = currentChar;
            
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[j++] = c;
                }
            }
        }
        
        return j;
    }
};