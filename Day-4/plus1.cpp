vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        //traverse from the end of array
        for(int i = n-1; i>=0; i--){
            //if element is 9, we need to replace it by 0, coz when we add 1 in 9 , it became 10
            if(arr[i] == 9){
                arr[i] = 0;
            }
            //else simply increase digit and return vector arr
            else{
                arr[i]++;
                return arr;
            }
          
         }
        //case when all digits are 9( push all element as 0, and make only first element as 1)
        arr.push_back(0);
        arr[0] = 1;
        
        return arr;
    }
