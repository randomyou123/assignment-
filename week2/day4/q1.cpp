class Solution {
public:
    string reverseWords(string s) {
          int i=0;
          int j=0;
          string ans="";
          while(j<s.size()){
            j=i;
            while(j+1<s.size() && s[j+1]!=' '){
                j++;
            } 
            int a=j;
            while(i<j){
                swap(s[i],s[j]);
                i++;

                j--;
            }
      
            i=a+2;
          }
          return s;

    }
};
//  revrse the word
