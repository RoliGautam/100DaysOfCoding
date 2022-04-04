 //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum){
        int c = 0;
        //create unordered map
        unordered_map<int, int>m;
        //initialize pre-sum as 0
        int psum = 0;
        for(int i = 0; i<n; i++){
            //calculate presum
            psum += arr[i];
            //if presum is equal to given sum then increase count
            if(psum == sum){
                c++;
            }
            //if we find psum-sum into map
            //then add the frequency of that element into our count
            if(m.find(psum-sum) != m.end()){
                c += m[psum-sum];
            }
            //insert presum and its frequency into map
            m[psum]++;
            
        }
        return c;
    }
