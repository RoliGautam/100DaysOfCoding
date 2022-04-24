//using dutch national flag algo
// 75. Sort Colors

 void sortColors(vector<int>& arr) {
        int n = arr.size();
        int l = 0;
        int mid = 0;
        int h = n-1;
        while(mid<=h){
            switch(arr[mid]){
                case 0:
                    swap(arr[l], arr[mid]);
                    l++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(arr[h], arr[mid]);
                    h--;
                    break;
            }
        }
     
    }

//time complexity: 0(n)
