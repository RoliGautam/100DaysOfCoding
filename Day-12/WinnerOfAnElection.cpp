 //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n){
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int>m;
        //strore frequency
        for(int i  = 0; i<n; i++){
            m[arr[i]]++;
        }
        //create two variable one, for frequency and other for winnerName
        int freq = 0;
        string winnerName;
        //traverse the map
        for(auto x:m){
            //if given freq is less than the frequecny stored into map
            //then update freq and winner name
            if(x.second>freq){
                freq = x.second;
                winnerName = x.first;
            }
            //els if both have equal frequency 
            //then who is lexicographically less, update winnerName by it
            else if(x.second == freq && x.first < winnerName){
                winnerName = x.first;
            }
        }
        //create a string vector to store res
        vector<string>res;
        //push the winnerName
        res.push_back(winnerName);
        //as our vector is string type
        //so we need to convert frequency into string to push into vector
        string temp = to_string(freq);
        res.push_back(temp);
        return res;
    }
