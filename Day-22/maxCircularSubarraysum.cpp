//Ex: arr[] = {5, -2, 3, 4} 
//Here, the circular array 3,4,5 will have maximum sum as 12, So output will be 12.


//find the maximum sum of normal subarray using kadane's algorithm...
int normalsum(int arr[], int n){
   int res = arr[0];
   int presum = arr[0];
   for(int i = 1; i<n; i++){
       presum = max(presum+arr[i], arr[i]);
       res = max(res, presum); }
   return res;
}
//overall maximum subarray sum...
int finalmaxsum(int arr[], int n){
    int maxnormalsubarrsum = normalsum(arr,n);
    //check if all elements is negative in the array then we don't need to check for circular subarr sum, just return normal max sum
    if(maxnormalsubarrsum<0) return maxnormalsubarrsum;
    int arrsum = 0;
    for(int i = 0; i<n; i++){
        //total sum of all elements in array
        arrsum += arr[i];
        //for finding minimum sum, we just invert the array element and then find maximum sum using kadane fnx
        arr[i] = -arr[i];  }
    //find the circular max sum, int the inverted array using kadane fnx
    //as we are finding minimum sum instead of maximum sum after inverting array element ,so insdead of subtracking, we are adding total sum to get max of circular subarray sum
    int maxcircularsum = arrsum + normalsum(arr, n);
    return max(maxcircularsum, maxnormalsubarrsum);
}
