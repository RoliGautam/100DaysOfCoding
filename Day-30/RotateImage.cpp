//48. Rotate Image(leetcode medium)
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        //transpose of matrix
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        //reverse the each row...
        for(int i = 0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        }	
    }

//time compleixity: 0(n^2)
//space complexity: 0(1)
