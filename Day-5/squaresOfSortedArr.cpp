#include<bits/stdc++.h>
using namespace std;
//basic idea: we will use two pointer approach, left = 0, right = n-1
//traverse the array, and check if arr[l]*arr[l]> arr[r]*arr[r] {means sqaure of left element is greater than square of right element}
// in this case, insert the greater one, (arr[l]*arr[l]) and increase left pointer
//same for right element, decrease right pointer
//after doing this, we will get a decreasing sorted array, but we need increasing sorted array
//so just reverse the array using reverse function
vector<int> squareOfSortedArr(vector<int>&arr, int n){
    vector<int>v;
    int l = 0;
    int r = n-1;
    while(l<=r){
        if(arr[l]*arr[l]> arr[r]*arr[r]){
           v.push_back(arr[l]*arr[l]);
           l++;
        }else{
           v.push_back(arr[r]*arr[r]);
           r--;
        }
    }
    reverse(v.begin(), v.end());
    arr = v;
    return arr;
}

//Time Complexity 0(n)
