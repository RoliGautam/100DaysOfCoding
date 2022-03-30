    vector<vector<int>> merge(vector<vector<int>>& arr) {
     //CREATE A ANS 2D VECTOR TO STORE THE RESULT
        vector<vector<int>> ans;
        if(arr.size()== 0){
            return ans;
        }
        sort(arr.begin(), arr.end());
        //create a temp vector for particular interval(an interval is also an array of two elements)
        //initially insert first interval into temp
        
        vector<int>temp = arr[0];
        //traverse the given 2d array from second element as first element store into temp
        //and compare with the temp-intervals and given arry-intervals
        for(auto it:arr){
            //if the first element of second interval is less than the second element of first interval, then it will get overlapped,
            //so store the max of second element of both intervals
            if(it[0] <= temp[1]){
              temp[1] = max(it[1], temp[1]);
            }else{
                //if interval not overlapped then push that particular interval into ans vector
                ans.push_back(temp);
              //and insert the current interval into temp vector

                temp = it;
            }
        }
        //after this, if any interval remaining at end, insert it too
        ans.push_back(temp);
        return ans;
    }


//Time Complexity: 0(nlog(n))+0(n)
