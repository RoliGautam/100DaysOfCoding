    int subarraySum(vector<int>& arr, int k) {
        
        //Approach: store the presum and thier frequency into map
        int presum = 0;
        int n = arr.size();
        //initially count will be 0
        int c = 0;
        //create unordered map
        unordered_map<int, int>m;
        //traverse the array
        for(int i = 0; i<n; i++){
            //calculate presum, by adding current element
            presum = presum+arr[i];
            //if presum is equal to given sum(k), then increase count
            if(presum == k){
                c++;
            }
            //if presum-given sum is already present into map, that means there is a subaaray of sum k, then add the frequency into our count
            if(m.find(presum-k) != m.end()){
                c += m[presum-k];
            }
            
                //store the presum and frequency into map
                m[presum]++;
            
        }
        return c;
    }


//Time Complexity: 0(n)
