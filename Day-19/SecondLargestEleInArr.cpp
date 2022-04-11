//Naive Approach by using the concept of first largest element
//Time complexity : 0(n^n)
//function to find first largest
int firstlargest(int arr[], int n){
    int largest = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>arr[largest]) 
          largest = i;
    }
    return largest;
}
//required function to find second largest
int secondlargest(int arr[], int n){
    int flarge = firstlargest(arr, n); //first largest
  //initially consider second largest ele index as -1
      int slarge = -1; 
    //traverse the whole array
    for(int i =0; i<n; i++){
        //check if our current element is not equal to first largest element
        if(arr[i] != arr[flarge]){
            if(slarge == -1)
              slarge = i;
            //if current element is greater than second largest(slarge) as well as not equal to first largest then update the index of flarge
            else if(arr[i]>arr[slarge])
              slarge = i;
        }
    }
   return slarge;
}




//Efficient approach [ Time complexity: 0(N) ]

int secondlargest(int arr[], int n){
    //consider first largest as first element and second largest as -1 index
    int flarge = 0;
    int slarge = -1;
    //traverse from second element
    for (int i = 1; i < n; i++)
    {   //if our current element is greater than first largest then update first largest as current element and second largest as first largest
        if (arr[i] > arr[flarge])
        {
            slarge = flarge;
            flarge = i;
        }
        //else if our current element less than first element, then there will be three case:
        else if (arr[i] < arr[flarge]){
          // but if current element is greater than second largest or we didn't find any second largest yet, then current element will be second largest
            if (arr[i] > arr[slarge] || slarge == -1)
            {
                slarge = i;
            }
        }
    }
    //return index of second largest
    return slarge;
}
