//this is an standard problem of stack(LIFO)
#include<iostream>
#include<stack>
using namespace std;
int matching(char a, char b){
    return ((a == '{' ) && (b == '}')) || ((a == '(' ) && (b == ')')) || ((a == '[' ) && (b == ']'));
}
bool isBalanceBrackets(string str){
    //create a stack
    stack<char>s;
    //traverse the string and if we find any open brakets then push it into stack
    for(int i = 0; i<str.size(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[') s.push(str[i]);
        //otherwise....
        else{
            //if our stack is empty means there are no open brackets, only close brackets are present , so return false , not a balance parenthesis
             if(s.empty() == true) return false;
             //if top of stack and current ele of string not matching then return false
             if(matching(s.top(), str[i]) == false) return false;
             //if matches, then pop that from stack and continue process
             else s.pop(); 

        }
    }
    //atlast, if our stack become empty, then return true
return (s.empty() == true);
}
int main(){
    string str;
    cin>>str;
    cout<<isBalanceBrackets(str);
    return 0;
}

//time complexity: 0(n) and auxiliary space if 0(n) for the stack