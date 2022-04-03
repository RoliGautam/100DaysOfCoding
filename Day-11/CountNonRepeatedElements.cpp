 //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //initialize count as 0
        int c  = 0;
        //create unordered map
        unordered_map<int, int>m;
        //store the frequency of each element
        for(int i = 0; i<n; i++){
            m[arr[i]]++;
        }
        //traverse the map, and if its frequency is 1
        //then increase count(means its a non repeated element)
        for(auto x:m){
            if(x.second == 1){
                c++;
            }
        }
        return c;
    }
//Time complexity: 0(n)
