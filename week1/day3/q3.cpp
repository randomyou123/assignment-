class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int right=height.size()-1;
        int left=0;
        while(right>left){
            int w=min(height[left],height[right]);
            int area=(right-left)*w;
            maxarea=max(maxarea,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};