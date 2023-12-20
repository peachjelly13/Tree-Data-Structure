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

void inorder(Node* newNode){
	if(newNode==NULL){
		return;
	}
	inorder(newNode->left);
	cout << newNode->data << endl;
	inorder(newNode->right);
}
int main(){
	Node* newNode = new Node(4);
	newNode->left = new Node(5);
	newNode->right = new Node(6);
	newNode->left->right = new Node(9);
	newNode->left->left = new Node(11);
	inorder(newNode);
}

