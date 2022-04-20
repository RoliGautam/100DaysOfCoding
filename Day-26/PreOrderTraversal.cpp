//implementation of binary tree....
//preorder traversal...
#include<bits/stdc++.h>
using namespace std;
struct Node{
    struct Node *left;
    int key;
    struct  Node *right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};
//preorder traversal....
void printKeyPreoder(Node *root){
    if(root != NULL){
    cout<<root->key<<" ";
    printKeyPreoder(root->left);
    printKeyPreoder(root->right);
    }
}
int main(){
    Node *root  = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left  = new Node(60);
    root->left->right = new Node(70);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    printKeyPreoder(root);
    return 0;
}
