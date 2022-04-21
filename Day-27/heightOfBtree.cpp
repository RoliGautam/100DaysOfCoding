//find the height of the binary tree

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
//recursive function to find height..
int printHeight(Node *root){
    if(root == NULL) return 0;
    else return ( max(printHeight(root->left) , printHeight(root->right)) + 1 );
}

int main() {
	
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	root->left->left = new Node(60);
  root->left->right = new Node(70);
  cout<<printHeight(root);
  return 0;
}
