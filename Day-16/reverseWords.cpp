#include<bits/stdc++.h>
using namespace std;

//reverse function to reverse the particular words...
void reverseArr(char arr[], int l, int r){
    while(l<=r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

//function to reverse whole string
void reverseStr(char arr[], int n){
  int l = 0;
  for(int i = 0; i<n; i++){
      if(arr[i] == ' '){
          //reverse each words
          reverseArr(arr, l, i-1);
          l = i+1;
      }
  }
  //for reversing last word of string
  reverseArr(arr, l, n-1);
  //for reversing whole string
  reverseArr(arr, 0, n-1);
}

int main(){
    string s;
    getline(cin, s);
    int n=s.length();
    char arr[n];
    //copy string into array
    strcpy(arr, s.c_str());
    cout<<"After reversing words in the string:"<<endl;
    reverseStr(arr, n);
    for (int i = 0; i < n; i++) 
        cout << arr[i];
    return 0;
}