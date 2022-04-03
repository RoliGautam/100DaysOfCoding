 // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // create map and store the frequency of elements
            unordered_map<int, int>m;
            for(int i = 0; i<n; i++){
                m[arr[i]]++;
            }
            //traverse the array 
            //whenever we find first element which occures more than one, 
            //return its index
            for(int i = 0; i<n; i++){
                if(m[arr[i]] > 1){
                    return i+1;
                }
            }
            return -1;
    }
