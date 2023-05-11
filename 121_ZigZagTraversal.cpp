#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	if(root==NULL){
    	    return ans;
    	}
    	queue<Node*>q;
    	q.push(root);
    	bool lefttoright=true;//flag
    	
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int>output(size);
    	    //Level Process
    	    for(int i=0;i<size;i++){
    	    Node*frontnode=q.front();
    	    q.pop();
    	        int index=lefttoright? i:size-i-1;
    	        output[index]=frontnode->data;
    	        
    	        if(frontnode->left){
    	            q.push(frontnode->left);
    	        }
    	        if(frontnode->right){
    	            q.push(frontnode->right);
    	        }
    	    }
    	    //direction change karni hai
    	    lefttoright=!lefttoright;
    	    
    	    for(auto i:output){
    	        ans.push_back(i);
    	    }
    	}
    	return ans;
    	
    }
};