#include<bits/stdc++.h>
using namespace std;
//efficient approach..[ TIme complexity: 0(n) and space complexity: 0(n) ]....
vector<int> nextGreater(int arr[], int n){
    vector<int>v;
    stack<int>s;
    s.push(arr[n-1]);
    v.push_back(-1);
    for(int j = n-2; j>=0; j--){
        while (s.empty() == false && s.top()<=arr[j])
        {
            s.pop();
        }
        int nextGreat = s.empty()?-1:s.top();
        v.push_back(nextGreat);
        s.push(arr[j]);
    }
    reverse(v.begin(), v.end());
return v;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>res = nextGreater(arr,n);
    for(auto x: res){
        cout<<x<<" ";
    }
    return 0;
}