//we need to find size of tree. size is the total number of nodes present into tree.
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
int sizeOfBTree(Node *root){
    if(root == NULL) return 0;
    else {
        return 1+(sizeOfBTree(root->left)+sizeOfBTree(root->right));
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
    cout<<sizeOfBTree(root);
    return 0;
}

//Time complexity: 0(n)
//space complexity: 0(h)

