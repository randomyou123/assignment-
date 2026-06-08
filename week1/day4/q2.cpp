//reshape the matrix
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> rmat(r, vector<int>(c));
        int tb = r * c;
        int n = mat.size();
        int m = mat[0].size();
        int a = 0, b = 0;
        if (tb != (n * m))
            return mat;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (b == mat[0].size()) {
                    b = 0;
                    a++;
                }
                rmat[i][j] = mat[a][b];
                b++;
            }
        }
        return rmat;
    }
};