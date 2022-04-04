#include<bits/stdc++.h>
using namespace std;
//naive solution
//Time complexity : 0(n)
//we are creating temp string, space complexity: 0(n)
bool palindrome(string str){
    //create a temp str and copy original string
    string temp;
    temp = str;
    //reverse  the temp string
    reverse(temp.begin(), temp.end());
    //if after reversing, thay are equal return true;
    if(temp == str){
        return true;
    }
    return false;
}

//efficient approach
//use two pointer 
//Time Complexity 0(n), space complexity: 0(1)
bool palindromeStr(string str){
    int l = 0;
    int r = str.length()-1;
    while(l<r){
        if(str[l] != str[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    string str;
    getline(cin, str);
//    cout<< palindrome(str);
   cout<< palindromeStr(str);
    return true;
}