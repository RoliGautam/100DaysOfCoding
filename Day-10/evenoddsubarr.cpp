#include<bits/stdc++.h>
using namespace std;
//naive solution 0(n^2) complexity...
int evenoddsubarr(int arr[], int n){
    int res = 1;
    for(int i = 1; i<n; i++){
    int count = 1;
    for(int j = i+1; j<n; j++){
        //if one element is odd and other is even , increase the count
        if((arr[j]%2 == 0 && arr[j-1]%2 != 0) || (arr[j]%2 != 0 && arr[j-1]%2 == 0)){
            count++;
            //update the result
            res = max(res, count);
        }
        else{
            //otherwise again initialize our count as 1 for new subarray
            count = 1;
        }
    }
    }
    return res;
}
//efficient approach 0(n) complexity...
int evenodd(int arr[], int n){
    int res = 1;
    int count = 1;
    //traverse the result
    for(int i =1; i<n; i++){
        //condition for even odd element
             if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0)){
            count++;
            res = max(res, count);
        }
        else{
            count = 1;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // cout<<evenoddsubarr(arr,n);
    cout<<evenodd(arr,n);
    return 0;
}
