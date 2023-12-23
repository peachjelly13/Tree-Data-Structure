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

void iterative_postorder(Node* newNode){
	vector<int>answer;
	if(newNode == NULL){
		print(answer);
	}
	stack<Node*>s1;
	stack<Node*>s2;
	s1.push(newNode);
	while(!s1.empty()){
		Node* top = s1.top();
		s1.pop();
		s2.push(top);
		if(top->left!=NULL){
			s1.push(top->left);
		}
		if(top->right!=NULL){
			s1.push(top->right);
		
		}
	}
	while(!s2.empty()){
		answer.push_back(s2.top()->data);
		s2.pop();
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
	iterative_postorder(newNode);

}

