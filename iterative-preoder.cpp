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
void print(vector<int>v){
	for(auto it:v){
		cout << it << " ";
	}
}
void preorder_iterative(Node* newNode){
	vector<int>answer;
	if(newNode == NULL){
		print(answer);
	}
	stack<Node*>st;
	st.push(newNode);
	while(!st.empty()){
		Node* root = st.top();
		st.pop();
		answer.push_back(root->data);
		if(root->right!=NULL){
			st.push(root->right);
		}
		if(root->left!=NULL){
			st.push(root->left);
		}



	}
	print(answer);

}
int main(){
	Node* newNode = new Node(10);
	newNode->left = new Node(11);
	newNode->right = new Node(12);
	newNode->left->left = new Node(13);
	newNode->left->right = new Node(14);
	newNode->right->left = new Node(15);
	newNode->right->right = new Node(16);
	preorder_iterative(newNode);
	
}
