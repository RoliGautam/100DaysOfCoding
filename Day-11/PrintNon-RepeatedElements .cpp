 //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
       //Your code here
       //create vector to store the result
        vector<int>res;
        //create an unordered map
        unordered_map<int, int>m;
        //store the frequency 
        for(int i = 0; i<n; i++){
            m[arr[i]]++;
        }
        //traverse the array
       for(int i = 0; i<n; i++){
           //if frequency of element is 1, then push into res
           if(m[arr[i]] == 1){
               res.push_back(arr[i]);
           }
       }
       return res;
    }

//Time complexity: 0(n)
