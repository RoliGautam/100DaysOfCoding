// Function to check if two numbers in the array have sum equal to the given sum
int sumExists(int arr[], int n, int sum) {
    // Your code here
    unordered_set<int>s;
    for(int i = 0; i<n; i++){
        if(s.find(sum-arr[i]) != s.end()){
            return 1;
        }else{
            s.insert(arr[i]);
        }
    }
    return 0;
}
