#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};
void postOrderTraversal(Node *root){
    if(root != NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(60);
    root->left->right = new Node(70);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    postOrderTraversal(root);
    return 0; 
}