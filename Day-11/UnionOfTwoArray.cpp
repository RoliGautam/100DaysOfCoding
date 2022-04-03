//Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        //create set and store elements of first array
        unordered_set<int> s(a, a+n);
        //traverse second array
        for(int i = 0; i<m; i++){
            //if second array element is not present into set, then insert it
            if(s.find(b[i]) == s.end()){
                s.insert(b[i]);
            }
        }
        //return the size of set
        return s.size();
    }
