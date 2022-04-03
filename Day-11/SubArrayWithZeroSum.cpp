 //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
       //initialize spum as 0 
       int psum=0;
      //create a set
       unordered_set<int> us;
      //traverse the array
       for(int i=0; i<n; i++){
         //calculate the presum
           psum+=arr[i];
         //if presum is equal, then its true
           if(psum==0) return true;
         //if presum is found into set then its true
           else if(us.find(psum)!=us.end())  return true;
         //otherwise insert into set
           else us.insert(psum);
       }
       return false;
    }
