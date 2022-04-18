//rotate a matrix by 90 degree....
#include<bits/stdc++.h>
using namespace std;
const int n=3;
//naive method...
void rotate(int mat[n][n]){
    int temp[n][n];
    for(int i = 0; i<n; i++){
          for(int j = 0; j<n; j++){
              temp[n-j-1][i] = mat[i][j];
          }
    }
    for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			mat[i][j] = temp[i][j];
}

//efficient approach...
void rotateMat(int mat[n][n]){
    //transpose of matrix
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    //reverse the elements from top to bottom in each col...
    for(int i = 0; i < n; i++){
	    int low = 0, high = n - 1;
	    while(low < high){
	        swap(mat[low][i], mat[high][i]);
	        low++;
	        high--;
	    }
	}
}
int main(){
    int arr[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
//    rotate(arr);
rotateMat(arr);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}	
	return 0;
}
