#include<bits/stdc++.h>
using namespace std;
//naive approach, time complexity:0(n^2)
bool subarraygivensum(int arr[], int n, int s){
    int sum = 0;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            sum = sum+arr[j];
            if(sum == s) return true;
        }
    }
    return false;
}
//efficient approach, time complexity: 0(n)
bool subarrGivenSum(int arr[], int n, int s){
    unordered_set<int> htable;
    int presum = 0;
    for(int i = 0; i<n; i++){
        presum += arr[i];
        if(htable.find(presum-s) != htable.end()) return true;
        //this is to handle corner cases, when we have presum itself equal to given sum
        // eg: 2 3 4 6, s = 9
        // presum = 2+3+4 = 9
        else if(presum == s) return true;
        else htable.insert(presum);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    // cout<<subarraygivensum(arr, n, s);
    cout<<subarrGivenSum(arr, n, s);
    return 0;
}