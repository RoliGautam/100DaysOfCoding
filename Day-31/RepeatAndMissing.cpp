// Repeat and Missing Number Array(medium)

#include<bits/stdc++.h>
using namespace std;
//time complexity: 0(n) and space : 0(n)
//first approach using count sort
void misingAndDupEle(int arr[], int n){
    vector<int>temp(n+1, 0);
    for(int i = 0; i<n; i++){
        temp[arr[i]]++;
    }
    for(int i = 1; i<n+1; i++){
        if(temp[i] == 0){
            cout<<"the missing number is : "<<i<<endl;
         }
         if(temp[i] > 1){
             cout<<"the repeating number is : "<<i<<endl;
         }
    }
}

//second approach using mathimatical formula
//sum(n) = n*(n+1)/2 {1+2+3+.....+n}
//sum(n^2) = n*(n+1)(2n+1)/6 {1^2+2^2+3^2+...+n^2}
//time complexity: 0(n) and space : 0(1)
void MissingAndDup(int arr[], int n){
    int x = n*(n+1)/2;
    int x2 = n*(n+1)*(2*n+1)/6;
    int y = 0;
    int y2 = 0;
    for(int i = 0; i<n; i++){
          y = y+arr[i];
          y2 = y2+arr[i]*arr[i];
    }
    int a = x2-y2;
    int b = x-y;
    cout<<"repeating number : "<<(a-b*b)/2*b<<endl;
    cout<<"missing number : "<<(a+b*b)/2*b<<endl;    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // misingAndDupEle(arr,n);
    MissingAndDup(arr,n);
    return 0;
}
