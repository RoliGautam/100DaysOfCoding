#include<bits/stdc++.h>
using namespace std;
bool checkRot(string &s1, string &s2){
    if(s1.length() != s2.length()) return false;
    string sum = s1+s2;
    return (sum.find(s2) != string::npos);
}
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
   cout<<checkRot(s1, s2);
    return 0;
}

// s1 = abc, s2 = bca 
//o/p: true;
