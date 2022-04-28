//stock span problem...
// span is the number of count of an element is the total previous greater element + itself..
//eg: [ 1, 2, 5, 3, 8 ] : span: [1, 2, 3, 1, 5]
#include<bits/stdc++.h>
using namespace std;
//naive approach....Time complexity: 0(n^2)
void span(int arr[], int n){
    for(int i = 0; i<n; i++){
        int span = 1;
        for(int j = i-1; j>=0 && arr[j] <= arr[i]; j--){
                span++;
        }
        cout<<span<<" ";
    }
}

//Efficient approach....Time complexity:0(n) and space: 0(n) for stack
void spanofStock(int arr[], int n){
    stack<int>s;
    s.push(0);
    cout<<1<<" ";
    for(int i = 1; i<n; i++){
    while(s.empty() == false && arr[s.top()] <= arr[i]){
        s.pop();
    }
    int span = s.empty()? i+1 : i-s.top();
    cout<<span<<" ";
    s.push(i);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"span of given numbers are : "<<endl;
    // spanofStock(arr, n);
    span(arr, n);
    return 0;
}