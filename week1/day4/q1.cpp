//matrix diagonal sum 
class Solution {
public:
    int prisum(vector<vector<int>>& mat) {
        int i=0,j=0;
        int s=0;
        while (i < mat.size() && j < mat[0].size()) {
            s = s + mat[i][j];
            j++;
            i++;
        }
        return s;
    }
    int secsum(vector<vector<int>>& mat) {
        int i=0,j=mat.size()-1;
        int s=0;
        while (i < mat.size() && j >=0) {
            s = s + mat[i][j];
            j--;
            i++;
        }
        return s;
    }
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        if (n % 2 != 0) {
        return secsum(mat)+prisum(mat)-mat[n/2][n/2];
        }
            return secsum(mat)+prisum(mat);
    }
};