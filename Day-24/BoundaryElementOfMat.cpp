//Boundary element of a matrix

#include<bits/stdc++.h>
using namespace std;
const int R = 3, C = 4;
void boundary(int arr[R][C]){
    if(R == 1){
        for(int i = 0; i<C; i++)
        cout<<arr[0][i]<<" ";
    }else if(C == 1){
        for(int i = 0; i<R-1; i++){
            cout<<arr[i][0]<<" ";
        }
    }else{
        //for the first row
        for(int i = 0; i<C; i++) cout<<arr[0][i]<<" ";
        //for the last column
        for(int i = 1; i<R; i++) cout<<arr[i][C-1]<<" ";
        //for the last row
        for(int i = C-2; i>=0; i--) cout<<arr[R-1][i]<<" ";
        //for the first column
        for(int i = R-2; i>0; i--) cout<<arr[i][0]<<" ";
    }
}
int main(){

    int arr[R][C];
    for(int i = 0; i<R; i++){
        for(int j = 0; j<C; j++){
            cin>>arr[i][j];
        }
    }
    boundary(arr);
return 0;
}
