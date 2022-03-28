#include<bits/stdc++.h>
using namespace std;

//majority element is the element which occur, more than or equal to n/2 times, where n = size of arr
//use moores voting algo
//Time Complexity: 0(n)
int majEle(int arr[], int n){
    int maj = arr[0];
    int c =1;
    for(int i = 1; i<n; i++){
        if(arr[i]==maj){
            c++;
        }else{
            c--;
            if(c == 0){
                maj = arr[i];
                c = 1;
            }
        }
    }
   return maj;
}
int main(){
    int n;
    cin>>n; 
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<majEle(arr, n);
    return 0;
}