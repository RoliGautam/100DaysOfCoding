#include <bits/stdc++.h>
using namespace std;
int longestConsequetive(int arr[], int n)
{
    // sort the given array
    sort(arr, arr + n);
    // initialize the count and res as 1
    int count = 1;
    int res = 1;
    // traverse the array from second element
    for (int i = 1; i < n; i++)
    {
        // if they are consequtive
        // increase the count
        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
        }
        // if not equal or not consequetive then update res
        // and again initialize count as 1 coz from there we will start new consecutive elements
        else if (arr[i] != arr[i - 1])
        {
            res = max(res, count);
            count = 1;
        }
    }
    // return the maximum of res and count
    return max(res, count);
}

// Efficient approach: Time COmplexity : theta(n)
int consecutiveSubsequent(int arr[], int n)
{
    //insert array into set
    unordered_set<int> s(arr, arr+n);
    //initialize res as 0
    int res = 0;
    //traverse the elements
    for (auto x: s){
        //if not find previous element means it's a first element of consecutive subsequent
        if (s.find(x-1) == s.end()){
            //initialize count as 1
            int count = 1;
            //untill we find x+count element, increase our count
            while (s.find(x + count) != s.end()){
                count++;
            }
            //update res
            res = max(res, count);
        }
    }
    // return res 
    return res;
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
    // cout << longestConsequetive(arr, n);
    cout << consecutiveSubsequent(arr, n);
    return 0;
}