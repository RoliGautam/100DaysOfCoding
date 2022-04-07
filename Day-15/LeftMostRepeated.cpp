#include<bits/stdc++.h>
using namespace std;

//naive approach 0(n^2)
int leftmostRepeatedChar(string &s){
    for(int i = 0; i<s.length(); i++){
       for(int j =i+1; j<s.length(); j++){
           if(s[i] == s[j]){
               return i;
           }
       }
    }
    return -1;
}
//better approach, Time complexity: 0(n)
//Store frequency into temp array 
//but this requires two traversal, we need to optimize it...
int leftMost(string &s){
    int temp[256] = {0};
    for(int i = 0; i<s.length(); i++){
        temp[s[i]]++;
    }
    for(int i =0; i<s.length(); i++){
        if(temp[s[i]]>1){
            return i;
        }
    }
    return -1;
}

//Efficient approach....
int leftMostRepeated(string &s){
    //create a temp array
    int temp[256];
    //fill temp arr with -1
    fill(temp, temp+256, -1);
    //initially take res as max
    int res = INT_MAX;
    //travers temp array
    for(int i = 0; i<256; i++){
        //if we found -1 into temp array that means it is a first occureance, so update it by the current index
        if(temp[s[i]] == -1){
            temp[s[i]] = i;
        }
        //otherwise update res by the minimum of current index and res
        //we update by minimum coz we need left most repeated element
        else{
            res = min(res, temp[i]);
        }
    }
    return (res == INT_MAX?-1:res);
}
int main(){
    string s;
    cin>>s;
    // cout<<leftmostRepeatedChar(s);
    cout<<leftMost(s);
    return 0;
}
