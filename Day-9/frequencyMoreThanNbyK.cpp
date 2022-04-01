#include<bits/stdc++.h>
using namespace std;

void frequencyMoreNbyK(int arr[], int n, int k){
    sort(arr, arr+n);
    int count = 1;
    for(int i =  1; i<n; i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
        if(count > n/k){
            cout<<arr[i-1]<<" ";
        }
        count = 1;
    }
}

//efficient approach
//Time complexity Theta(n)
void frequencyMax(int arr[], int n, int k){
    //create unordered map
    unordered_map<int, int > m;
    //store the element and its frequency into map
    for(int i = 0; i<n; i++){
        m[arr[i]]++;
    }
    //traverse the map 
    //and if frequency is greater than n/k
    //print that element
    for(auto x: m){
        if(x.second>n/k){
            cout<<x.first<<" ";
        }
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin>>k;
    frequencyMax(arr, n, k);
    return 0;
}
