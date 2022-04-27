//we need to find a majority element, which occurs more than n/3 times, where n is the size of array.....
#include<bits/stdc++.h>
using namespace std;

//better approach...
vector<int> majorityElement(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    unordered_map<int, int>mp;
    for(int i =0; i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second>(n/3)) ans.push_back(x.first);
    }
    return ans;
}

//naive approach....
vector<int> majEle(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    for(int i = 0; i<n; i++){
        int c = 1;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j])
            c++;
        }
        if(c>(n/3)) ans.push_back(arr[i]);
    }
    return ans;
}

//Efficient Approach: using moore's voting algorithm...
vector<int> majELementinarr(vector<int> &arr){
        int n = arr.size();
        int c1 = 0, c2 = 0;
        int maj1 = -1, maj2 = -1;
        for(int i  = 0; i<n; i++){
            if(arr[i] == maj1) c1++;
            else if(arr[i] == maj2) c2++;
            else if(c1 == 0){
                    maj1 = arr[i];
                    c1 = 1;
                }
            else if(c2 == 0){
                    maj2 = arr[i];
                    c2 = 1;
                }
            else{
                c1--;
                c2--;
            }
            
        }
        vector<int>res;
        c1 = 0, c2 = 0;
        for(int i = 0; i<n; i++){
            if(maj1 == arr[i]) c1++;
            if(maj2 == arr[i]) c2++;
        }
        if(c1>(n/3)) res.push_back(maj1);
        if(c2>(n/3)) res.push_back(maj2);
        return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector < int > majority;
    majority = majELementinarr(arr);
    // majority = majorityElement(arr);
    cout << "The majority element is : ";

    for (auto it: majority) {
        cout << it << " ";
    }
    return 0;
}