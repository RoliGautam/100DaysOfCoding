#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
//efficient approach
int pairS(int arr[], int n, int sum){
    unordered_set<int> s;
    for(int i= 0; i<n; i++){
        if(s.find(sum-arr[i]) != s.end()){
           cout<<sum-arr[i]<<" "<<arr[i]<<endl;
           return 1;
        }else{
            s.insert(arr[i]);
        }
    }
    return 0;
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
    cout<<pairS(arr, n, sum);
    return 0;
}