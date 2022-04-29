#include<bits/stdc++.h>
using namespace std;
     int uniquePaths(int m, int n) {
        //using permutations
        int total_ways = (m-1)+(n-1);
        int r = min(n, m)-1;
        double res = 1;
        for(int i = 1; i<=r; i++){
         res = res*total_ways/i;   
            total_ways--;
        }
        return res;
    }
int main(){
    int n, m;
    cin>>m>>n;
    cout<<"total unique paths are : "<<endl;
    cout<<uniquePaths(m, n);
    return 0;
}

//time complexiyt: 0(min(n,m))
//space complexity: 0(1)
