#include<bits/stdc++.h>
using namespace std;

//naive approach....0(n^2) complexity
int leftmostNonRepeated(string &s1){
    for(int i = 0; i<s1.length(); i++){
        bool flag = false;
        for(int j = 0; j<s1.length(); j++){
            if(i != j && s1[i] == s1[j]) {
            flag = true;
            break;
        }
        if(flag == false){
            return i;
        }
    }
    }
    return -1;
}

//Better Approach.....0(n) time complexity
int LeftNonRepeat(string &s){
    int temp[256] = {0};
    for(int i = 0; i<s.length(); i++){
        temp[s[i]]++;
    }
    for(int i = 0; i<s.length(); i++){
        if(temp[s[i]] == 1){
            return i;
        }
    }
    return -1;
}

//Efficient Approach.....
int leftNonReatedCharacter(string &s){
    //create a temp array
    int temp[256];
    //fill it by -1
    fill(temp, temp+256, -1);
    //traverse the string
    for(int i = 0; i<s.length(); i++){
        //if we found the index as -1, then update it by current index
        if(temp[s[i]] == -1){
            temp[s[i]] = i;
        }
        //otherwise update it by -2 coz it is not first occurance and we can't update it -1 as -1 is for the first occurance
        else{
            temp[s[i]] = -2;
        }
    }
    int res = INT_MAX;
    for(int i = 0; i<256; i++){
        if(temp[i] >= 0){
            res = min(res, temp[i]);
        }
    }
    return (res == INT_MAX?-1:res);
}

int main(){
    string s;
    cin>>s;
    // cout<<leftmostNonRepeated(s);
    // cout<<LeftNonRepeat(s);
    cout<<leftNonReatedCharacter(s);
    return 0;
}