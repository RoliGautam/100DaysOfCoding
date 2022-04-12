int mean(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    int avg = sum/n;
    return avg;
}
//for finding median we need to sort the array
int median(int arr[], int n){
    sort(arr,arr+n);
    if(n%2 != 0) return arr[(n-1)/2];
    else{
        int k = n/2;
        return (arr[k]+arr[k-1])/2;
    }
}
