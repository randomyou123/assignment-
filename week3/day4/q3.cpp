class Solution {
public:
    void nse(vector<int>& h,vector<int>& ind){
        int n=h.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&h[st.top()]>=h[i]){
                st.pop();
            }
            if(st.empty()) ind[i]=n;
            else ind[i]=st.top();
            st.push(i);
        }
        
    }
    void pse(vector<int>& h,vector<int>& ind){
        int n=h.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&h[st.top()]>h[i]){
                st.pop();
            }
            if(st.empty()) ind[i]=-1;
            else ind[i]=st.top();
            st.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ma=INT_MIN;
        vector<int> nsei(n);
        vector<int> psei(n);
        pse(heights,psei);
        nse(heights,nsei);
        for(int i=0;i<n;i++){
            int forward=nsei[i]-i;
            int backward=i-psei[i];
            int tl=forward+backward-1;
            int area=tl*heights[i];
            ma=max(area,ma);
        }
        return ma;

    }
};