//a majority element is an element that appearse into array more than n/2
#include<bits/stdc++.h>
using namespace  std;
int majEle(int arr[], int n){
    int maj = arr[0];
    int c = 1;
    for(int i = 1; i<n; i++){
        if(arr[i] == maj) c++;
        else {
            c--;
            if(c<0){
                c = 1;
                maj = arr[i];
            }
        }
    }
    return maj;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i<n; i++){
        cin>>arr[i];
    }
    cout<<"majority element is : "<<majEle(arr, n)<<endl;
    return 0;
}