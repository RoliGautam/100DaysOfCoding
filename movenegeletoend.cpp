#include <bits/stdc++.h>
using namespace std;

// time complexity: 0(n)
// space complexity: 0(n)
void moveNegEleToEnd(int arr[], int n)
{
    // create an empty array to store the elements
    int temp[n];
    // initialize the index of temp array
    int j = 0;
    // traverse the whole array
    for (int i = 0; i < n; i++)
    {
        // and if element is positive, insert it into temp array
        if (arr[i] > 0)
        {
            temp[j++] = arr[i];
        }
    }
    // after inserting only positive element, if index becomes n, that means all element are positive, so just do nothing
    //  if j == 0, that means only one element exits, then it can be +ve or -ve, so it is already in our required form, hence do nothing
    if (j == n || j == 0)
        return;
    // traverse the array again, and insert all -ve element , after inserting +ve element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j++] = arr[i];
        }
    }
    // copy all elements of temp array into our original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
    moveNegEleToEnd(arr, n);
    printarr(arr, n);
    return 0;
}