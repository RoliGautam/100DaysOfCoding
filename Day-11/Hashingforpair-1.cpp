// Function to check if there is a pair with the given sum in the array.
int sumExists(int arr[], int n, int sum) 
    //we will not insert the whole array initially
    //coz, there might be cases like 1, 2, 3, 5 and sum = 6,
    //then if we check 6-3 = 3, which will be present into set, but we have only one 3, 
    //so it will give wrong output
    unordered_set<int>s;
    
    for(int i  = 0; i<n; i++){
            if(s.find(sum-arr[i]) != s.end()){
            return 1;
        }
        else{
            s.insert(arr[i]);
        }
    
    }
    return 0;
}
