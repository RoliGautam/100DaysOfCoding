int naiveSearch(string &txt, string &ptn){
    int n = txt.length();
    int m = ptn.length();
    for(int i  = 0; i<=(n-m); i++){
        int j;
        for(j = 0; j<m; j++){
            //if not match , break and move i ptr
            if(ptn[j] != txt[i+j]) break;   
        }
        //if j becomes equal to m, means string match, return current index i
        if(j == m)  { return i;   }
     }
     //if not found till end, return -1
  return -1;
}
