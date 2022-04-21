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
//inorder traversal
void inorder(Node *root){
   if(root != NULL){
       inorder(root->left);
       cout<<root->key<<" ";
       inorder(root->right);
   }
}
int main() {
	
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	root->left->left = new Node(60);
    root->left->right = new Node(70);
	inorder(root);
    return 0;
}

//Time complexity: BigO(n)
// Space complexity: BigO(h), where h is the hight of tree