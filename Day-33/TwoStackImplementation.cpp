//we need to implement two stacks on a array at the same time....
#include<bits/stdc++.h>
using namespace std;
struct twoStack{
    //initialize var..
    int *arr;
    int cap;
    int top1, top2;
    twoStack(int n){
        cap = n;
        arr = new int[n];
        top1 = -1;
        top2 = cap;
    }
    //implementation of push1(for first stack)...
    void push1(int x){
        //top1<n-1 {n = size of array}....
        if(top1<top2-1){
            top1++;
            arr[top1] = x;
        }else{
            cout<<"overflow"<<endl;
            exit(1);
        }
    }
    //implementation of push2(for second stack)...
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2] = x;
        }else{
            cout<<"overflow"<<endl;
            exit(1);
        }
    }
    int pop1(){ 
        if (top1 >= 0) { 
            int delEle = arr[top1]; 
            top1--; 
            return delEle; 
        } 
        else { 
            cout << "Stack UnderFlow"; 
            exit(1); 
        } 
    } 
  
    int pop2() { 
        if (top2 < cap) { 
            int delEle = arr[top2]; 
            top2++; 
            return delEle; 
        } 
        else { 
            cout << "Stack UnderFlow"; 
            exit(1); 
        } 
    } 
};
int main(){
    twoStack s(6);
    //[[30,63,99],[33,42,12]]
    s.push1(30);
    s.push2(12);
    s.push2(42);
    s.push1(63);
    s.push1(99);
    s.push2(33);
    cout << "Popped element from stack1 is "<<s.pop1(); 
    s.push2(40); 
    //[[30,63][40,33,42,12]]
    cout << "\nPopped element from stack2 is "<<s.pop2(); 
    return 0; 
}
