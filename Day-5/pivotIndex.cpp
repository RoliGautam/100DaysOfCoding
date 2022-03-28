#include<bits/stdc++.h>
using namespace std;
int pivotInd(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    int lsum = 0;
    int rsum = sum;
    for(int i = 0; i<n; i++){
        rsum = rsum-arr[i];
        if(rsum == lsum){
            return i;
        }
        lsum = lsum+arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<pivotInd(arr , n);
    return 0;
}