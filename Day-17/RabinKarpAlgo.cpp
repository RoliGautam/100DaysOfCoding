#include <bits/stdc++.h>
using namespace std;
#define d 256
const int q=101;
void rbsearch(string txt, string ptn, int n, int m){
    //copute the d-value for computation
    int h = 1;
    for(int i = 1; i<m; i++){
        h = (d * h)%q;
    }
    //copute p and t(t will be for the first pattern)
    int p=0,t=0;
    for(int i = 0; i<m; i++){
        //for the code of pattern string
        p=(p*d+ptn[i])%q;
        //for the code first pattern length string into text
        t=(t*d+txt[i])%q;
    }
    //check for the spurious hits...
    for(int i = 0; i<=n-m; i++){
        //if code matches for patten and text
        if(p == t){
            //set flag as true and check for the characters
            bool flag  = true;
            for(int j  = 0; j<m;  j++){
                //if characters not match of ptn and txt, set flag as false
                if(txt[i+j] != ptn[j]) flag = false;
            }
                //if flag become true means characters as well as code match, so print the current index
                    if(flag == true){
                        cout<<i<<" ";
                    }
                
        }
       //calculate the code for the next window
       if(i<n-m){
             t=((d*(t-txt[i]*h))+txt[i+m])%q;
             //make sure the t is always negative
             if(t<0)t=t+q;
       }
    }
}


int main() 
{   int n, m;
    cin>>n>>m;
    string txt, ptn;
    cin>>txt;
    cin>>ptn;
    cout<<"All index numbers where pattern found:"<<" ";
    rbsearch(txt, ptn, n, m);   
    return 0; 
} 

//TIme complexity: 0(n-m+1) on avg
//worst case complexity: 0((n-m+1)*m)
