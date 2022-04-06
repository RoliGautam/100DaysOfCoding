#include<bits/stdc++.h>
using namespace std;
bool anagramStr(string &s1, string &s2, int n){
    if(s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2) return true;
}

//efficient approach... 0(n) linear complexity
bool anagramString(string &s1, string &s2, int n){
   if(s1.length() != s2.length()) return false;
   int count[256] = {0};
   //update the frequency
   //for first string increase frequency, for second string decrease the frequency
   for(int i = 0; i<n; i++){
       s1[i]++;
       s2[i]--;
   }
   //check the count array and if any char have freq more than 0, then return false
   for(int i = 0; i<256; i++){
       if(count[i] != 0) return false;
   }
   return true;
}
int main(){
    int n;
    string s1, s2;
    cin>>n;
    cin>>s1>>s2;
    // cout<<anagramStr(s1, s2, n);
    cout<<anagramString(s1, s2, n);
    return 0;

}