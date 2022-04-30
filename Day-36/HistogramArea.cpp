#include<bits/stdc++.h>
using namespace std;


//naive method...
//Time complexity: 0(n^2)....
int maxArea(int arr[], int n){
    int res = 0;
    for(int i = 0; i<n; i++){
        int currArea = arr[i];
        for(int j = i-1; j>=0; j--){
             if(arr[j]>=arr[i]){
                 currArea += arr[i];
             }else{
                 break;
             }
        }
        for(int j = i+1; j<n; j++){
            if(arr[j]>=arr[i]){
                currArea += arr[i];
            }else{
                break;
            }
        }
        res = max(res, currArea);
    }
    return res;
}

//-----------------------------------------------------------------------------------------------------------------------




//Better approach...time complexity: 0(n) an
//maxArea = NextSmall - preSmall -1

//find the previous smaller for each element of array
vector<int> preSmall(int arr[], int n){
    stack<int>s;

    vector<int>v;

    for(int i = 0; i<n; i++){
        while(s.empty() == false && arr[s.top()]>=arr[i]){
            s.pop();
        }
        int previousSmaller = s.empty() ? -1 : s.top();
        v.push_back(previousSmaller);
        s.push(i);
    }
    return v;
}
//find the next Smaller for each element of array.....
vector<int> nextSmaller(int arr[], int n){
    stack<int>s;

    vector<int>v;

    for(int i = n-1; i>=0; i--){
        while (s.empty() == false && arr[s.top()]>=arr[i])
        {
            s.pop();
        }
        int nextSmall = s.empty()? n : s.top();
        v.push_back(nextSmall);
        s.push(i);
    }
    reverse(v.begin(), v.end());
    return v;
}

//funtion for the max area of anagram.....
int maxAreaOfAnagram(int arr[], int n){
    vector<int>ps = preSmall(arr,n);
    vector<int>ns = nextSmaller(arr, n);
    int res = 0;
    int currArea;
    for(int i = 0; i<n; i++){
        currArea = arr[i]*(ns[i]-ps[i]-1);
        res = max(res, currArea);
    }
    return res;
}

// -----------------------------------------------------------------------------------------------------------------------------



//efficient solution....Time complexity: o(n)....
int maxAnagramArea(int arr[], int n){
    stack<int>s;
    int res = 0;
    int currArea;
    int tp;
    for(int i = 0; i<n; i++){
        while (s.empty() == false && arr[s.top()]>=arr[i])
        {
            tp = s.top();
            s.pop();
            currArea = arr[tp]*(s.empty()?i:(i-s.top()-1));
            res = max(res, currArea);
        }
        s.push(i);
    }
    while (s.empty() == false)
    {
            tp = s.top();
            s.pop();
            currArea = arr[tp]*(s.empty()?n:(n-s.top()-1));
            res = max(res, currArea);
    }
    return res;
}


// ------------------------------------------------------------------------------------------------------------


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // cout<<"maximum area is : "<<maxAnagramArea(arr, n)<<endl;
    // cout<<"maximum area is : "<<maxArea(arr, n)<<endl;
    cout<<"maximum area is : "<<maxAreaOfAnagram(arr, n)<<endl;
    return 0;
}