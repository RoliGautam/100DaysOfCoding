// 53. Maximum Subarray
 
int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int ms = arr[0];
        int cs = 0;
        for(int i = 0; i<n; i++){
            cs = cs+arr[i];
            ms = max(ms, cs);
            if(cs<0) cs = 0;
        }
        return ms;
    }

//time complexity: 0(n)
