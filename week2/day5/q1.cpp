class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string ,vector<string>> mpp1;
        // for(string s:strs){
        //     for(int j=0;j<s.size();j++){
        //         mpp[s[j]]++;
        //     }
        // }
      for(string s:strs){
        string temp=s;
        sort(temp.begin(),temp.end());
        mpp1[temp].push_back(s);
      }
      vector<vector<string>> ans;
      for(auto &it:mpp1){
        ans.push_back(it.second);
      }
      return ans;
    }
};
// group anagram
