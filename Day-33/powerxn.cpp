//we are givne x and n, we need to find the power of x^n
#include<bits/stdc++.h>
using namespace std;
//Efficient approach.. Time complexity: 0(logn)
double powerOfX(double x, int n){
    //store n into a temp num
    long long num = n;
    double ans = 1.0;
    //check if num is -ve or not and make it +ve
    if(num<0) num = -1*num;
    //while num if greater than 0(+ve num)
    while (num>0){
        //if num is even
        if(num%2 == 0){
            x = x*x;
            num = num/2;
        }else{
            //if num is odd, make it even by subtracting by 1
            ans = ans*x;
            num = num-1;
        }
    }
    //and if n is -ve store ans as reverse(wkt)
    if(n<0) ans = (double)(1.0)/(double)(ans);
    return ans;
}
//naive approach... Time complexity: 0(n)
double myPow(double x, int n) {
        long long num = n;
        double ans = 1.0;
        //check if num is -ve
        if(num<0) num = -1*num;
        for(int i = 0; i<num; i++){
           ans = ans*x;
        }
        if(n<0) ans = (double)(1.0)/(double)(ans);
        return ans;
}

int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    cout<<"the power of "<<x<<" is : "<<powerOfX(x,n)<<endl;
    return 0;
}