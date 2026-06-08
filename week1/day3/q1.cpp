class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         vector<int>ve;
         int n= nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            ve.push_back(nums[i]);
        }
    }
     for(int i=0;i<ve.size();i++){
        nums[i]=ve[i];
    } 
    for(int i=ve.size();i<n;i++){
        nums[i]=0;
    }
    }
};