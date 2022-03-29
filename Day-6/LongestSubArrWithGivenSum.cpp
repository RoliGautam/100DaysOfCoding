#include<bits/stdc++.h>
using namespace std;
//brute-force approach...
//Time Complexity: 0(n)
int longSubArrLen(int arr[], int n, int sum){
    //initialize the len as 0
    int len = 0;
    //traverse the array
    for(int i = 0; i<n; i++){
        //for each ith element calculate presum
        int presum = 0;
        for(int j = i; j<n; j++){
            presum += arr[j];
            //if equal then update the len
            if(presum == sum){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}

//Efficient Approach...
//Time Complexity: Theta(n)
int LongestSubarrayWithGivenSum(int arr[], int n, int sum){
    //create an unordered map
    unordered_map<int, int>m;
    //initialize presum and len as 0
    int len = 0;
    int presum = 0;
    //traverse the array
    for(int i = 0; i<n; i++){
        //calculate presum by adding current_element
        presum = presum + arr[i];
        //if presum is equal to sum means sum start from first index, then len will be i+1 (coz index start from 0)
        if(presum == sum){
            len = i+1;
        }
        //if we did not find presum into our map, then insert the presum and index into map
        if(m.find(presum) == m.end()){
            //insert presum as key and index as value (3, 0)...
            m[presum] = i;
        }
        //if we find the presum-sum, then update the len
        if( m.find(presum-sum) != m.end()){
            //i is the current element index (starting index of subarray)
            //and m[presum-sum] is the index of element stored into map (ending index)
            len = max(len, i-m[presum-sum]);
        }
    }
    //return the maximum length of the subarray...
    return len;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    // cout<<longSubArrLen(arr, n, sum);
    cout<<LongestSubarrayWithGivenSum(arr, n, sum);
    return 0;
}