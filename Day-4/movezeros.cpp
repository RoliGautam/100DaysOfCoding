//function to move all zeros at the end of array
void moveZeroes(vector<int>& arr) {
          int n = arr.size();
        //initialize an index by 0
          int idx = 0;
        //traverse the array
          for(int i = 0; i<n; i++){
              //if element is not zero, then swap it by index idx(initially 0) and increase it
              if(arr[i] != 0){
                  swap(arr[idx++], arr[i]);
              }
          }
        //when we finish all the positive elements, whatever remaining space, put 0 at those positions
        for(; idx<n; idx++){
            arr[idx] = 0;
        }
    }
