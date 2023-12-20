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
void print(vector<vector<int>>v){
	for(auto it :v){
		for(auto it_ : it){
			cout << it_ << " ";
		}
		cout << endl;
	}
}
void BFS(Node* newNode){
	queue<Node*>q;
	vector<vector<int>>v;
	if(newNode==NULL){
		print(v);
	}
	q.push(newNode);
	while(!q.empty()){
		int size = q.size();
		vector<int>level;
		for(int i =0;i<size;i++){
			Node* node = q.front();
			q.pop();
			if(node->left!=NULL){
				q.push(node->left);
			}
			if(node->right!=NULL){
				q.push(node->right);
			}
			level.push_back(node->data);
			

		
		}
		v.push_back(level);

	}
	print(v);

		
}

int main(){
	Node* newNode = new Node(10);
	newNode->left = new Node(11);
	newNode->right = new Node(12);
	newNode->left->left = new Node(13);
	newNode->left->right = new Node(14);
	newNode->right->left = new Node(15);
	newNode->right->right = new Node(16);
	BFS(newNode);

	


}

