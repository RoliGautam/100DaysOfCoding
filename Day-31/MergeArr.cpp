// 88. Merge Sorted Array


#include<bits/stdc++.h>
using namespace std;
void mergeSorted(int a1[], int m, int a2[], int n){
    //last index of first array
    int i = m-1;
    //last index of second array
    int j = n-1;
    //index to store result
    int idx = m+n-1;
    //update first array by the max ele of both arrays
    while (i>=0 && j>=0){   
        if(a1[i]>a2[j]){
            a1[idx]=a1[i];
            idx--;
            i--;
        }else{
            a1[idx] = a2[j];
            idx--;
            j--;
        }
    }
    //if after comparison there are some more remaining elements into arrays then
    while(i>=0){
        a1[idx]=a1[i];
        idx--;
        i--;
    }
    while (j>=0)
    {
        a1[idx] = a2[j];
        idx--;
        j--;
    }    
}
int main(){
    int n, m;
    cin>>m>>n;
    int a1[m];
    int a2[n];
    for(int i = 0; i<m; i++){
        cin>>a1[i];
    }
    for(int i = 0; i<n; i++){
        cin>>a2[i];
    }
    mergeSorted(a1, m, a2, n);
    cout<<"the sorted merged array is : "<<endl;
    
    for(int i = 0; i<=n+m-1; i++){
        cout<<a1[i]<<" ";
    }
    return 0;
}

// •	Time complexity: 0(n) and space complexity:0(1)
