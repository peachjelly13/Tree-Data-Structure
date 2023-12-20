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
void inorder_iterative(Node* newNode){
	stack<Node*>st;
	vector<int>answer;
	Node* node = newNode;
	while(true){
	if(node!=NULL){
		st.push(node);
		node = node->left;
	}
	else{
		if(st.empty()==true)break;
		node = st.top();
		st.pop();
		answer.push_back(node->data);
		node = node->right;
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
	inorder_iterative(newNode);

}
