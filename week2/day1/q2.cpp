class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> l(26,0);
        for(int i=0;i<s.size();i++){
            l[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(l[s[i]-'a']==1) return i;
        }
        return -1;

    }
};
// 387. First Unique Character in a String