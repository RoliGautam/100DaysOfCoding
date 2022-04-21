//we are given a tree and k, we need to print all the nodes of k- distance from the root

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

void printNodesOfKdistance(Node *root, int k){
    if(root == NULL) return;
    if(k == 0) cout<<root->key<<" ";
    else{
     printNodesOfKdistance(root->left, k-1);
     printNodesOfKdistance(root->right, k-1);
    }
}

int main() {
	int k;
    cin>>k;
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	root->left->left = new Node(60);
    root->left->right = new Node(70);
    printNodesOfKdistance(root, k);
    return 0;
}


