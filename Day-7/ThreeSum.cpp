vector<vector<int>> Threesum(vector<int> &arr){
    int n = arr.size();
    // create a 2d vector to store the combo of triplet
    vector<vector<int>> res;
    // first sort the given array, so that all repeating element comes together
    sort(arr.begin(), arr.end());
    // find a (loop for "a")
    // run loop till second last element because remaining two can not be a, as there will be not 2 elements remaining in right side
    for (int i = 0; i < n - 2; i++)
    {
        // check if a is the first element then do operating
        // otherwise if i>0, and second element is not equal to first, then proceed
        if (i == 0 || (i > 0 && arr[i] != arr[i - 1]))
        {
            int l = i + 1;
            int r = n - 1;
            // a+b+c = 0
            // b+c = 0-a
            // b+c = sum
            // here a is current element a = arr[i]
            int sum = 0 - arr[i];
            while (l <= r)
            {
                if (arr[l] + arr[r] == sum)
                {
                    // create vector to store each triplet(1d array)
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[l]);
                    temp.push_back(arr[r]);
                    // after finding a triplet , insert this triplet into 2d array vector res
                    res.push_back(temp);
                    // after inserting move the pointers
                    // before moving ptr, also remove(skip) duplicate elements
                    while (l <= r && arr[l] == arr[l + 1])
                        l++;
                    while (l <= r && arr[r] == arr[r - 1])
                        r--;
                    // if not duplicate, simple move ptr
                    l++;
                    r--;
                }
                else if (arr[l] + arr[r] < sum)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
    }
    return res;
}

//Time Complexity: 0(n^2)
//Space complexity: 0(m), where m is the number of triplet
