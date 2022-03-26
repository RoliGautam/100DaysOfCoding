#include<bits/stdc++.h>
using namespace std;

void rotateby1(int arr[], int n)
{   
    //store the last element into a temp variable
    int t = arr[n-1];
    //traverse array from second last element
    for(int i = n-2; i>=0; i--){
        //swap the elements
        swap(arr[i], arr[i+1]);
    }
    //store last element at first index
    arr[0] = t; 
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
    rotateby1(arr, n);
    printarr(arr, n);
    return 0;
}