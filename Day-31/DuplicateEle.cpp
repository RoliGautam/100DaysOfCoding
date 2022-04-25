//287. Find the Duplicate Number(leetcode medium)
//using the tortoise method(cycle like a ll)...

#include<bits/stdc++.h>
using namespace std;
int dupEle(int arr[], int n){
    int s = arr[0];
    int f = arr[0];
    //first time we need to move s and f , so use do{}while();
    //move slow one step and fast two step ahead untill they collide
    do{
        s = arr[s];
        f = arr[arr[f]];

    }while(s != f);
    //after collision, initialize f as first ele and move both ptr only one step ahead
    //and wherever they collide, this will be our duplicate ele
    f = arr[0];
    while (s != f)
    {
        s = arr[s];
        f = arr[f];
    }
    //return anyone s or f
    return s;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"duplicate ele is : "<<dupEle(arr, n);
    return 0;
}
//time complexity: 0(n)
//space complexity: 0(1)
