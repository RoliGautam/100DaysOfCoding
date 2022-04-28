//we are given an array and we need to find the previous greater element for each ele of array and if not any previous greater element, then print -1 for that element
//eg: [20,30,10,5,15] :: o/p: [-1,-1,30,10,30]
#include<bits/stdc++.h>
using namespace std;
//naive approach: 0(n^2)
void prevGreater(int arr[], int n){
    for(int i = 0; i<n; i++){
        int j;
        for(j = i-1; j>=0; j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<  " ";
                break;
            }
        }
        if(j == -1) cout<<-1<<" ";
    }
}
//time complexity: 0(n) and space complexity: 0(n) for stack..
void previousGreater(int arr[], int n){
    stack<int>s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i = 1; i<n; i++){
        while(s.empty() == false && s.top() <= arr[i]){
            s.pop();
        }
        int greater = s.empty()?-1:s.top();
        cout<<greater<<" ";
        s.push(arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"previous greater of given numbers are : "<<endl;
    // previousGreater(arr, n);
    prevGreater(arr, n);
    return 0;
}
