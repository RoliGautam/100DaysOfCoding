// 74. Search a 2D Matrix
//we are given a target and we need to search it into a 2D matrix
#include<bits/stdc++.h>
using namespace std;
//better approach...
bool searchEle(vector<vector<int>> &mat, int target){
      //take a ptr at first ele of first row and another ptr at first ele of last col
      int n = mat.size();
      int m = mat[0].size();
      //i for row
      int i = 0;
      int j = n-1;
      while(i<m && j>=0){
          if(target == mat[i][j]) {
             cout<<i<<" , "<<j<<endl;
             return 1;
          }
          //if target is greater than the last ele of row that means it will be found in next row not in current row, so move the ptr to next row
          if(target<mat[i][j]){
              j--;
          }else{
              i++;
          }
      }
      return 0;
}
//efficient approach...
bool searchTarget(vector<vector<int>> &mat, int target){
    if(mat.size() == 0) return false;
    int m = mat.size();
    int n = mat[0].size();
    int low = 0;
    int high = n*m -1;
    int mid;
    while(low<=high){
        mid = (low + (high-low)/2);
        if(mat[mid/n][mid%n] == target){
            cout<<"target ele is found"<<endl;
            return true;
        }
        if(mat[mid/n][mid%n] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
    
}
int main(){
    vector<vector<int>> mat;
    mat = {{6, 3, 5, 7}, {10, 1, 16, 20}, {23, 30, 24, 50}};
    int target;
    cin>>target;
    // cout<<"target Ele : "<<searchEle(mat, target);
    cout<<searchTarget(mat, target);
    return 0;
}

//Time complexity: 0(log(n*m)) and space complexity: 0(1)
