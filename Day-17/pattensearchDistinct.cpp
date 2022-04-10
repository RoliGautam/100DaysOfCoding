//time complexity: 0(n)
void patternMatch(string &txt, string &ptn){
   int n = txt.length();
   int m = ptn.length();
   //traverse text
   for(int i = 0; i<=(n-m); ){
       int j ;
       //traverse patten and not match break
       for(j = 0; j<m; j++){
           if(ptn[j] != txt[i+j]) break;
       }       
       //if matches print current index
       if(j == m)  cout<<i<<" ";
        //if first element not match simply move i ptr by 1
       if(j == 0)  i++;
         //if some char of ptn match, move i ptr by i+j (at distinct char)
       else  i = (i+j);
   }
}
