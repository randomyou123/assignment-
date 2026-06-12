class Solution {
public:
    int start = 0;
    int mlen = 1;
    void check(string& s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        // this loop will break if l or r is out of bound or we are at a index
        // where palindrome is not possible
        int len = r - l - 1;
        if (len > mlen) {
            mlen = len;
            start = l + 1;
        } //+1 is because l will be on the position where paindrome condition
    }
    string longestPalindrome(string s) {

        int n = s.size();

        for (int i = 0; i < n; i++) {

            // odd length palindrome
            check(s, i, i);

            // even length palindrome
            check(s, i, i + 1);
        }
        return s.substr(start, mlen);
    }
};
// longest palindromic substring
