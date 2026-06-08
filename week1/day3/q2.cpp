class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> nnums;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]*nums[i];
            nnums.push_back(x);
        }
        sort(nnums.begin(),nnums.end());
        return nnums;
    }
};