int largestEle(int arr[], int n)
{
   //consider first element as largest
    int largest = 0;
    //traverse from second element till end
    for (int i = 1; i < n; i++)
    {//if we found any element greater than largest then update largest by that index
        if (arr[i] > arr[largest])   largest = i;
    }
    //return largest as the index of largest element
    return largest;
}

//Time complexity: 0(N)
