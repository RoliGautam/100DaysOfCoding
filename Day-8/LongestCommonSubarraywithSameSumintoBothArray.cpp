#include<bits/stdc++.h>
using namespace std;
//given two binary array of same size
//need to find the longest length of subarray having same sum into both array
//Brute force approach, using two loop, considering each subarray
int longestEqualSum(int a[], int n, int b[]){
   int len = 0;
   for(int i = 0; i<n; i++){
       int s1 = 0;
       int s2 = 0;
       for(int j = i; j<n; j++){
           s1 = s1+a[j];
           s2 = s2+b[j];
           if(s1 == s2){
               len = max(len, j-i+1);
           }
       }
   }
   return len;
}

//Efficient Approach
//Idea: find the difference of both array and store it into a temp array
//then problem, reduced to find the max subarray of zero sum
//after that check if there is a sum equal to 0, into temp array, then that will be our required subarray
//compare length and return max length
//Time complexity: Theta(n)
//Space Complexity:0(n)
int maxCommonSubarray(int a[], int n, int b[]){
    int temp[n];
    for(int i = 0; i<n; i++){
        temp[i] = a[i]-b[i];
    }
    //create an unordered_map
    unordered_map<int, int>m;
    int sum = 0;
    int len = 0;
    for(int i = 0; i<n; i++){
        sum += temp[i];
        if(sum == 0){
            len = i+1;
        }
        if(m.find(sum) != m.end()){
            len = max(len, i-m[sum]);
        }
        else {
            m[sum] = i;
        }
    }
    return len;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
        cin>>b[i];
    }
    // cout<<longestEqualSum(a, n, b);
    cout<<maxCommonSubarray(a, n, b);
    return 0;
}