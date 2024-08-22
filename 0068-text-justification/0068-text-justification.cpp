class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();
        int ind = 0;

        while (ind < n) {
            int tchars = words[ind].length();
            int last = ind + 1;

            while (last < n) {
                if(tchars + words[last].length() + (last - ind) > maxWidth)break;
                tchars += words[last].length();
                last++;
            }

            string line;
            int numWords = last - ind;
            if (last == n || numWords == 1) {
                for (int i = ind; i < last; i++) {
                    line += words[i];
                    if (i != last - 1) line += " ";
                }
                line += string(maxWidth - line.length(), ' ');
            } else {
                int spaces = (maxWidth - tchars) / (numWords - 1);
                int extraSpaces = (maxWidth - tchars) % (numWords - 1);

                for (int i = ind; i < last; i++) {
                    line += words[i];
                    if (i != last - 1) {
                        line += string(spaces + (i - ind < extraSpaces ? 1 : 0), ' ');
                    }
                }
            }

            result.push_back(line);
            ind = last;
        }

        return result;
    }
};