// Leaders are somethings which are greater than all the right side element present in an array. 

#include <bits/stdc++.h>
using namespace std;
//Naive approach : 0(n^n) time complexity
void leader(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool lead = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {
                lead = false;
                break;
            }
        }
        if (lead == true)
        {
            cout << arr[i] << " ";
        }
    }
}

//EFFICIENT APPROACH 0(N) COMPLEXITY..
void leaders(int arr[], int n){
    //take initially leader as last element of array coz last element will always be a leader
    int lead = arr[n-1];
    //and store it into result
    cout<<lead<<" ";
    //traverse array from second element into right side...
    for(int i = n-2; i>=0; i--){
        //if current element is greater than our leader then update leader and store it into result...
        if(arr[i]>lead){
            lead = arr[i];
            cout<<lead<<" ";
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

    leader(arr, n);
    return 0;
}