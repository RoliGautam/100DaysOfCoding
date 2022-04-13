//Naive method
void leftRotByOne(int arr[], int n){
    int t = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1]= arr[i];
    }
    arr[n-1]=t;

}
void leftRotByd(int arr[], int n, int d){
    for(int i = 0; i<d; i++){
        leftRotByOne(arr,n);
    }
    printarr(arr,n);
}


//Efficient method
void reverse(int arr[], int low, int high){
    while (low < high){
        swap(arr[high], arr[low]);
        low++;
        high--;
    }
}

void leftRotate(int arr[], int d, int n){
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
