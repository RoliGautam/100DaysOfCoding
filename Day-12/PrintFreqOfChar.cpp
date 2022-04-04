//given a lowercase string, and we need to print the frequency of each characters present into string in sorted order
#include<bits/stdc++.h>
using namespace std;
void printFreqChar(string s){
    //create an empty array
    int temp[26] = {};
    //traverse the string
    //and store the frequency int temp array
    //s[i] = ascii value of current char
    //s[i]-'a' will give us the index of given char
    for(int i= 0; i<s.length(); i++){
        temp[s[i]-'a']++;
    }
    //traverse the temp array
    for(int i = 0; i<26; i++){
        //if frequency greater than 0
        //print char and its freq
        if(temp[i]>0){
            cout<<(char)(i+'a')<<" "<<temp[i]<<endl;
        }
    }

}
int main(){
    string str;
    // cin>>str;
    getline(cin, str);
    printFreqChar(str);
    return 0;
}