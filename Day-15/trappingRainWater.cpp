#include <bits/stdc++.h>
using namespace std;
int trapWater(int arr[], int n){
    int res = 0;
    for (int i = 1; i<n-1; i++){
        int lmax = arr[i];
        for(int j = 0; j<i; j++){
          lmax = max(lmax, arr[j]);
        }
        int rmax = arr[i];
        for(int j = i+1; j<n; j++){
            rmax = max(rmax, arr[j]);
        }
        res = res + (min(lmax, rmax) - arr[i]);
    }
    return res;
}

// effiecient approach 0(n) time complexity and 0(n) space complexity..
int trappingWater(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int res = 0;
        // we will create a temp array for the lmax and rmax of size n
        int lMax[n];
        int rMax[n];
        // initially take first element as the lmax's first element..
        lMax[0] = arr[0];
        // run a loop from second element...
        for (int i = 1; i < n; i++)
        {
            // update lmax as the maximum of current element and previous element
            lMax[i] = max(arr[i], lMax[i - 1]);
        }
        // initially take rmax as the last element of array..
        rMax[n - 1] = arr[n - 1];
        // traverse the array from right side
        for (int i = n - 2; i >= 0; i--)
        {
            // update rmax as the maximum of current element and next element..
            rMax[i] = max(arr[i], rMax[i + 1]);
        }
        // compute the result
        for (int i = 1; i < n - 1; i++)
        {
            res = res + (min(lMax[i], rMax[i]) - arr[i]);
        }

        return res;
    }

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

    cout << trapWater(arr, n);
    return 0;
}
