#include<bits/stdc++.h>
using namespace std;
//use the kadane's algo to find maximum sum of contiguous subarray
int MaxSubarraySum(int arr[], int n){
    int max_sum = arr[0];
    int curr_sum = arr[0];
    for(int i =1; i<n; i++){
        curr_sum = max(arr[i], curr_sum+arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<MaxSubarraySum(arr, n);
    return 0;
}