int majorityWins(int arr[], int n, int x, int y) {
    //assume initial count of x and y as zero
    int cx=0,cy=0;
    for(int i =0; i<n; i++){
        if(arr[i] == x) cx++;
        else if(arr[i]==y) cy++;
    }
    if(cx>cy) return x;
    else if(cx<cy) return y;
    else {
        if(x<y) return x;
        else return y;
    }
}
