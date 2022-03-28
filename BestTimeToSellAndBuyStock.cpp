#include<bits/stdc++.h>
using namespace std;
//Idea: we will initially take profit as 0, and then check if second element is greater than first, then we will get some profit, add this(second-first) into our final profit..
//we will run loop only till second last element, because we are comparing next element with the first element, so we don't need to go till last element as it will be compare with second last element
int Stock2(int arr[], int n){
    if(n == 0){
        return 0;
    }
    
    int profit = 0;
    for(int i = 0; i<n-1; i++){
       if(arr[i+1]>arr[i]){
           profit = profit+(arr[i+1]-arr[i]);
       }
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<Stock2(arr , n);
    return 0;
}
