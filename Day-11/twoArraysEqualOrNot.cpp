//Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int n) {
        //create two maps for both array
        unordered_map<int, int>a;
        unordered_map<int, int>b;
        //traverse the array
        //and store the frequecy and element into map
        for(int i = 0; i<n; i++){
            a[A[i]]++;
            b[B[i]]++;
        }
        //if both map(value and frequency) are equal then both arrays are equal
        if(a == b){
            return true;
        }
        return false;
    }
