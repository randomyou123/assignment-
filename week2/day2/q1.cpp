class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        int length = 0;
        unordered_set<char> mpp;
        while (j < s.size()) {
            if (mpp.find(s[j]) == mpp.end()) {
                mpp.insert(s[j]);
                length = max(length, j - i + 1);
                j++;
            } else {
                mpp.erase(s[i]);
                i++;
            }
        }
    return length;
    }
};
//longest substring without repeating character