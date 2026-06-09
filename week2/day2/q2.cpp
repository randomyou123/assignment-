class Solution {
public:
bool check(vector<int>& mpp1,vector<int>&mpp2){
    for(int i=0;i<mpp1.size();i++){
        if(mpp1[i]!=mpp2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        vector<int> mpp1(26,0);
        vector<int> mpp2(26,0);
        if(s2.size()<s1.size()) return false;
        for (int i = 0; i < s1.size(); i++) {
            mpp1[s1[i]-'a']++;
        }
        // mpp1 stores the count of the character in s1 
        int j = 0;
        int i = 0;
        // we will  created a window of size s1 
        while(j<s1.size()){
            mpp2[s2[j]-'a']++;
            j++;
        }
      
        // now we have first window with same size as s1 in s2 now chwck if they will have same content in them
       
        while (j < s2.size()){
          // check function will be checking that the content is same in both the vetor 
           if(check(mpp1,mpp2)){
            return true;
           }
         
            mpp2[s2[i]-'a']--;
            mpp2[s2[j]-'a']++;
            i++;
            j++;
           }

        return check(mpp1,mpp2);
    }
};
// Permutation in String