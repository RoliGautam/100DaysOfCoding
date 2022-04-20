// 287. Find the Duplicate Number


int findDuplicate(vector<int>& arr) {
        //create unordered map
        unordered_map<int, int>mp;
        int n = arr.size();
        //store the frequecncy into map
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }
        int dup;
        //traverse the map and whenever we find freq more than 1, means its a duplicate ele
        //so update dup as the value(first) of map and return
        for(auto x:mp){
            if(x.second>1){
                dup = x.first;
                break;
            }
        }
        return dup;
    }
