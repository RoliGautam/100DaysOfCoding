// 56. Merge Intervals (leetcode medium)

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeInterval(vector<vector<int>> &interval){
    vector<vector<int>> mergedInt;
    if(interval.size() == 0) return mergedInt;
    vector<int>tempInt = interval[0];
    for(auto it: interval){
         if(tempInt[1] >= it[0]){
             tempInt[1] = max(tempInt[1], it[1]);
         }else{
             mergedInt.push_back(tempInt);
             tempInt = it;
         }
    }
    mergedInt.push_back(tempInt);
    return mergedInt;

}

int main(){
   
    vector < vector < int >> arr;
    arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector < vector < int >> ans = mergeInterval(arr);
    cout << "Merged Intervals are " << endl;  
    for (auto it: ans) {
        cout << "["<<it[0] << " " << it[1] << "]"<<", ";
    }
    return 0;
}
//Time complexity: 0(nlogn+n) and space complexity: 0(n)
