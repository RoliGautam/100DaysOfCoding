   vector<vector<int>> generate(int n) {
     vector<vector<int>>v;
        for(int i = 0; i<n; i++){
            //create a vector for each row, of size i+1 and initialize the value by 1
            vector<int>row(i+1, 1);
            //find remaining elements and store into that row
            for(int j = 1; j<i; j++){
                row[j] = v[i-1][j-1]+v[i-1][j];
            }
            //push each row into our resultent vector
            v.push_back(row);
        }
        return v;    
    }

// Time Complexity : 0(n^n)
// Space Complexity: 0(n)
