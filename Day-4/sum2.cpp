 vector<int> twoSum(vector<int>& arr, int target) {
      unordered_map<int, int> m;
        int n = arr.size();
        vector<int>v;
      for(int i = 0; i<n; i++){
          if(m.find(target-arr[i]) != m.end()){
              //index from the map
              v.push_back(m[target-arr[i]]);
              //index from the current array ele
              v.push_back(i);
              return v;
          }
              //inserting element with their index into map
              m[arr[i]] = i;
    
      }
        return v;
    }

