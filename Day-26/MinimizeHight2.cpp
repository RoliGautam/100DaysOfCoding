    int getMinDiff(int arr[], int n, int k) {
        // sort the array first
        sort(arr, arr+n);
        //initialize two variable min and maxi
        int mini;
        int maxi;
        //initialize result as the difference of last and first element
        int res = arr[n-1] - arr[0];
        //traverse the array
        for(int i = 1; i<=n-1; i++){
            //if element is greater than k
            if(arr[i]>=k){
                //initialize minimum as the minimum of current_element-k and first_ele+k
                mini = min(arr[i]-k, arr[0]+k);
                //and maximum as the max of last_ele-k, and current_prev_ele+K
                maxi = max(arr[i-1]+k, arr[n-1]-k);
                //update res
                res = min(res, maxi-mini);
            }
        }
       return res;
    }

//Time complexity: BigO(nlogn)
