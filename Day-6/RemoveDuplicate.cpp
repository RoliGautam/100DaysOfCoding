// Function to remove duplicate
//Time complexity: 0(n)

int removeDuplicates(vector<int>& arr) {
        //if there are no elements return 0
        int n = arr.size();
        if( n == 0){
            return 0;
        }
        //take an index i for the very first element
        int i = 0; 
        //traverse array from second element
        for(int j = 1; j<n; j++){
            //compare second element with the first
            //if both are differen, increase the i pointer
            //and replace it by the jth element
            if(arr[j] != arr[i]){
                i++;
                arr[i] = arr[j];
            }
        }
        //return the i+1(total number of elements into final array)
      return i+1;
    }
