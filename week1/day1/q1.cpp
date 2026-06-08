class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int > mpp;
        int n= nums.size();
        int more;
        for(int i=0;i<n;i++){
            more=target-nums[i];
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[nums[i]]=i;
        }
        return{-1,-1};
    }
};