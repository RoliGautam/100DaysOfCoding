int maxArea(vector<int>& arr) {
        int n = arr.size();
        //initialize two pointers, first and last one
        int l = 0;
        int r = n-1;
        //initially water will be 0
        int water = 0;
        //run loop until they become equal
        while(l<r){
            //calculate the width and hight
            //we will take hight as minimum of both because that will be only hight that can store the water
            int width =  r-l;
            int hight = min(arr[l], arr[r]);
            //update the water
            water = max(water, hight*width);
            //whichever hight is less, move that pointer
            if(arr[l]<arr[r]){
                l++;
            }else{
                r--;
            }
        }
        return water;
    }
