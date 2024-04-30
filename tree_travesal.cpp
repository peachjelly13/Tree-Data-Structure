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
void tree_traversal(Node* newNode){
	stack<pair<Node*,int>>st;
	st.push({newNode,1});
	vector<int>in,pre,post;
	if(newNode == NULL){
		return;
	}
	while(!st.empty()){
		auto it = st.top();
		st.pop();
		if(it.second==1){
			pre.push_back(it.first->data);
			it.second++;
			st.push(it);
			if(it.first->left!=NULL){
				st.push({it.first->left,1});
			}
		}
		else if(it.second==2){
			in.push_back(it.first->data);
			it.second++;
			st.push(it);
			if(it.first->right!=NULL){
				st.push({it.first->right,1});
			}
		}
		else{
			post.push_back(it.first->data);
		}
	}
	print(in);
	cout << endl;
	print(pre);
	cout << endl;
	print(post);
	cout << endl;




}
int main(){
	Node* newNode = new Node(10);
	newNode->left = new Node(11);
	newNode->right = new Node(12);
	newNode->left->left = new Node(13);
	newNode->left->right = new Node(14);
	newNode->right->left = new Node(15);
	newNode->right->right = new Node(16);
	tree_traversal(newNode);
	
}
