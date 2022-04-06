//given an string and another string for subsequence, check whether it is subsequnce of given string or not
//for subsequence character should be into same order
// eg: str1 = abcd, str2 = ad 
//o/p: true;
//if str2 = da
//o/p: false (not in order)
#include<bits/stdc++.h>
using namespace std;
//TIme Complexity: 0(N+M)
bool subsequenceString(string s1, int n, string s2, int m){
    //if s1 is smaller then s2 can't be a subsequence of s1
    int j = 0;
    for(int i = 0; i<n && j<m; i++){
        if(s1[i] == s2[j]){
            j++;
        }
    }
    return (j==m);
}

//Recursive solution
bool subsequenceStr(string s1, string s2, int n, int m){
    //if m became 0, means string2 finished
    if(m == 0) return true;
    if(n == 0) return false;
    if(s1[n-1] == s2[m-1]){
         return subsequenceStr(s1, s2, n-1, m-1);
    }else{
       return subsequenceStr(s1, s2, n-1, m);
    }
}
int main(){
    int m, n;
    string s1, s2;
    cin>>n>>m;
    cin>>s1>>s2;
    // cout<<subsequenceString(s1, n, s2, m);
    cout<<subsequenceStr(s1, s2, n,  m);
    return 0;

}
