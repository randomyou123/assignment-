class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;double s=0;
        while(j<k){
            s=s+nums[j];
            j++;
        }
        double a=s/k;
        double ms=a;
        while(j<nums.size()){
            s=s+nums[j]-nums[i];
            a=s/(k);
            ms=max(ms,a);
            j++;
            i++;
            
        }
        return ms;
    }
};