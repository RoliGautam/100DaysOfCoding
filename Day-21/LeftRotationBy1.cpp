//Efficient Approach...

void leftRot(int arr[], int n){
    int t = arr[0];
    for(int i= 1; i<n; i++){
        arr[i-1]= arr[i];
    }
    arr[n-1] = t;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//TIme complexity: 0(N)
