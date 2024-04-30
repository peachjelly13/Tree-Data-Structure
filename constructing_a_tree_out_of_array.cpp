#include<bits/stdc++.h>
using namespace std;

struct Tree{
    Tree* left;
    Tree* right;
    int val;
    Tree(int data){
         this->val = data;
         this->left = nullptr;
         this->right = nullptr;
    }
};

Tree* buildtree(vector<int>&nums){
    if(nums.empty()){
        return NULL;
    }
    Tree* root = new Tree(nums[0]); //here data being assigned to root the root left is null , the root right is null
    queue<Tree*>q; //this queue will store the data , the left and the right pointer
    q.push(root); //pushing the root value in the queue
    int i =1;
    while(i<nums.size()){
        Tree* curr = q.front(); // taking the root node;
        q.pop(); //popping the root node
        if(i<nums.size()){
            curr->left = new Tree(nums[i++]);
            q.push(curr->left);
        }
        if(i<nums.size()){
            curr->right = new Tree(nums[i++]);
            q.push(curr->right);
        }
    }
    return root;
}

void inorder(Tree* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);  //we will ofcourse always go left and right just have to see when to go left right and when print the root value
    cout << root->val << endl;
    inorder(root->right);
}





int main(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin >> nums[i];
    }
    cout << "traversal" << endl;
    inorder(buildtree(nums));
 



}