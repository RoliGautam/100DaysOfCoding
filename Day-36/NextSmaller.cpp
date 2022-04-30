#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmaller(int arr[], int n){
    stack<int>s;
    s.push(n-1);
    vector<int>res;
    res.push_back(arr[n-1]);
    for(int i = n-2; i>=0; i--){
        while (s.empty() == false && arr[s.top()] >= arr[i]){
            s.pop();
        }
        int nextSmall = s.empty()?arr[n-1]:arr[s.top()];
        res.push_back(nextSmall);
        s.push(i);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Next smaller of given numbers are : "<<endl;
    vector<int> res = nextSmaller(arr, n);
    for(auto x: res){
        cout<<x<<" ";
    }
    return 0;
}

//time complexity: 0(n) and space complexity: 0(n)....
