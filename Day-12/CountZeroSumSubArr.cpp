   //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        unordered_map<int, int>m;
        int presum = 0;
        int c = 0;
        for(int i = 0; i<n; i++){
            presum += arr[i];
            if(presum == 0){
                c++;
            }
            if(m.find(presum) != m.end()){
                c = c+m[presum];
            }
            m[presum]++;
        }
        return c;
    }

//Time complexity: 0(n)
//Space complexity: 0(n)
