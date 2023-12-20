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
void postorder(Node* newNode){
	if(newNode==NULL){
		return;
	}
	postorder(newNode->left);
	postorder(newNode->right);
	cout << newNode->data;
}
int main(){
	Node* newNode = new Node(5);
	newNode->left = new Node(6);
	newNode->right = new Node(7);
	newNode->left->left = new Node(8);
	newNode->left->right = new Node(10);
	postorder(newNode);
}
