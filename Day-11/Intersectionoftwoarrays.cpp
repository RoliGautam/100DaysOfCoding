// Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int c  = 0;
        unordered_set<int>s(a, a+n);
        for(int i = 0; i<m; i++){
            if(s.find(b[i]) != s.end()){
                c++;
                //we erase the element from set, coz if there is repeating element into array, then there might be chance to get same elements which has been already counted
                //so we need to erase element form set so that it can't be counted again
                s.erase(b[i]);
            }
        }
        return c;
    }
