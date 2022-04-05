    vector<int> PosNegPair(int arr[], int n) {
        // create map to store positive elements into sorted order
        map<int, int>mp;
        //vector v to store negative elements
        vector<int>v;
        //vector res to store resultant pairs
        vector<int>res;
        for(int i = 0; i<n; i++){
            if(arr[i] < 0){
                v.push_back(arr[i]);
            }else{
                mp[arr[i]]++;
            }
        }
        sort(v.begin(), v.end());
        int N = v.size();
        for(int i = N-1; i>=0; i--){
            int freq = abs(v[i]);
            if(mp[freq]>0)
            {
                res.push_back(v[i]);
                res.push_back(freq);
                mp[abs(v[i])] -= 1;
            }
        }
        return res;
    }


//Time complexity: 0(n)
