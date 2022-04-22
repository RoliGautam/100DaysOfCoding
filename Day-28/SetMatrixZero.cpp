// better approach...
#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &mat)
{
    // find size of row and col array
    int n = mat.size();
    int m = mat[0].size();
    // create two dummy array and initialize by -1
    vector<int> row(n, -1);
    vector<int> col(m, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
    // again traverse the row and col array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                mat[i][j] = 0;
            }
        }
    }
}

// Efficient approach...
void setMatZeros(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    // initialize first ele of first col as true
    int colFirstEle = 1;
    for (int i = 0; i < n; i++){
        // if there is any element as 0 in first col
        if (mat[i][0] == 0)
            colFirstEle = 0;
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }

    //traverse from the end of mat...
    for(int i = n-1; i>=0; i--){
        //we will not go till 0th ele of first row coz it is handled by colFirstEle var
        for(int j = m-1; j>=1; j--){
            if(mat[i][0] == 0 || mat[0][j] == 0)
            mat[i][j] = 0;
        }
        if(colFirstEle == 0) mat[i][0] = 0;
    }
}

int main()
{
    vector<vector<int>> mat;
    mat = {{1, 2, 0},
           {4, 0, 5},
           {7, 8, 1}};
    int n = mat.size();
    int m = mat[0].size();
    // setZeros(mat);
    setMatZeros(mat);
    cout << "the final matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
