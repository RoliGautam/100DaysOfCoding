#include<bits/stdc++.h>
using namespace std;
//efficient solution to find previous smaller using stack
//time complexityP : 0(n) and space complexity: 0(N)
void previousSmall(int arr[], int n){
    stack<int>s;
    s.push(0);
    cout<<-1<<" ";
    for(int i = 1;i<n; i++){
        while (s.empty() == false && arr[s.top()]>= arr[i])
        {
            s.pop();
        }
        int preSmaller = s.empty() ? -1 : arr[s.top()];
        cout<<preSmaller<<" ";
        s.push(i);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"previous smaller of given numbers are : "<<endl;
    previousSmall(arr, n);
    return 0;
}