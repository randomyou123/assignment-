class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> lps(needle.size());
        lps[0] = 0;
        int l = 0;
        int i=1;
        int ans = -1;
        while (i < needle.size()) {
            if (needle[i] == needle[l]) {
                lps[i] = l + 1;
                l++;
                i++;
            } else {
                if (l != 0) {
                    l = lps[l - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        i=0;
     int j=0;
     // calculating pattern
     while(i<haystack.size()){
        if(haystack[i]==needle[j]){
            i++;
            j++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
        if(j==needle.size()){
         ans=i-j;
         break;
        }

     }
     return ans;
    }
};
// 28. Find the Index of the First Occurrence in a String