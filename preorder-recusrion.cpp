#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val){
		data = val;
		left = right = NULL;
	}
};
void preorder(Node* newNode){
	if(newNode==NULL){
		return;
	}
	cout << newNode->data << endl;
	preorder(newNode->left);
	preorder(newNode->right);

}
int main(){
	Node* newnode = new Node(4);
	newnode->left = new Node(5);
	newnode->right = new Node(6);
	newnode->left->left = new Node(7);
	newnode->left->right = new Node(8);
	newnode->right->right = new Node(10);
	newnode->right->left = new Node(11);
	preorder(newnode);

}

