#include <bits/stdc++.h>
using namespace std;
// naive approach...
int longestSubArrWith0s1s(int arr[], int n)
{
    int c0 = 0, c1 = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        if (c0 == c1)
        {
            maxLen = max(maxLen, c0 + c1);
        }
    }
    return maxLen;
}
// Effiecient approch...
//Time Complexity : Theta(n)
//Space Complexity: 0(n)
// The ideas is to convert all 0s into -1, and find the maximum length of subarray having 0 sum,
//  it become same as longest subarray having 0 sum
int SubArr0s1s(int arr[], int n)
{
    //replace 0 by -1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }
    //create a map to store pre_sum and thier index
    unordered_map<int, int>m;
    int psum = 0;
    int len = 0;
    for (int i = 0; i < n; i++)
    {   //calculate psum
        psum += arr[i];
        if (psum == 0)
        {
            len = max(len, i+1);
        }
        // if psum present into set
        if (m.find(psum) != m.end())
            {
                len = max(len, i-m[psum]);
            }
            else{
               m.insert({psum, i});
            }
       
    }
    return len;
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
    // cout << longestSubArrWith0s1s(arr, n);
    cout<<SubArr0s1s(arr, n);
    return 0;
}
