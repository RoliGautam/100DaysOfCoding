#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int fact(int n)
{
    return (n <= 1) ? 1 : n * (fact(n - 1));
}
int rankofStr(string &str)
{
    //initialize result as 1
    int res = 1;
    int n = str.length();
    //factorial of n
    int mul = fact(n);
    //create a count array and initialize by 0
    int count[CHAR] = {0};
    //store the frequencies of characters int array
    for (int i = 0; i < n; i++)
        count[str[i]]++;
    //strore the smaller element to left of greater one
    for (int i = 1; i < CHAR; i++)
        count[i] += count[i - 1];
    //traverse the string
    for (int i = 0; i < n - 1; i++){
        mul = mul / (n - i);
        res = res + count[str[i] - 1] * mul;
        for (int j = str[i]; j < CHAR; j++)
            count[j]--;
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    cout<<rankofStr(s);
    return 0;
}

//i/p: bca 
//o/p: 4