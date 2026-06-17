class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        vector<int> ans(n1, -1);
        unordered_map<int,int> mp;
        stack<int>st;
        int n=nums2.size()-1;
        st.push(nums2[n]);
        mp[nums2[n]]=-1;
        for(int i=n-1;i>=0;i--){
            if(!st.empty()&&st.top()<nums2[i]){
            
                while(!st.empty()&&st.top()<=nums2[i]){
                    st.pop();
                }
            }
            if(st.empty()){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);

        }
        for(int i=0;i<nums1.size();i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};