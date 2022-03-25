#include<bits/stdc++.h>
using namespace std;
//naive approah, time complexity: 0(n)
bool subarray0sum(int arr[], int n){
    int sum =0;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            sum = sum+arr[j];
            if(sum == 0) {
                return true;
            }
        }
    }
    return false;
}

//efficient approach, time complexity = 0(n)
bool subArrOSum(int arr[], int n){
    int presum = 0;
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        presum += arr[i];
        if(s.find(presum) != s.end()){
            

            return true;
        }else if(presum == 0) return true;
        else s.insert(arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // cout<<subarray0sum(arr, n);
    cout<<subArrOSum(arr, n);
    return 0;
}