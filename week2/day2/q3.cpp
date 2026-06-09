class Solution {
public:
    bool  check(vector<int>&mpp1,vector<int>&mpp2){
        for(int i=0;i<mpp1.size();i++){
            if(mpp1[i]!=mpp2[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int i=0;
        int j=0;
        if(p.size() > s.size()) return {};
       vector<int>mpp1(26,0);
       vector<int>mpp2(26,0);
        for(int k=0;k<p.size();k++){
            mpp1[p[k]-'a']++;
            mpp2[s[k]-'a']++;
        }
        vector<int>ans;
        //we hav our first window 
        j=p.size();
        while(j<s.size()){
            if(check(mpp1,mpp2)){
              ans.push_back(i);
            }
             mpp2[s[i]-'a']--;
             mpp2[s[j]-'a']++;
            i++;
            j++;
        }
        if(check(mpp1,mpp2)){
            ans.push_back(i);
        }
        return ans;
    }
};
// all anagaram