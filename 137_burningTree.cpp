#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
    Node* createParentMapping(Node* root,int target,map<Node*,Node*>&nodeToparent){
        Node* res=NULL;
        
        queue<Node*>q;
        q.push(root);
        nodeToparent[root]=NULL;
        
        while(!q.empty()){
            Node* front=q.front();
            q.pop();
            
            if(front->data==target){
                res=front;
            }
            
            if(front->left){
                q.push(front->left);
                nodeToparent[front->left]=front;
            }
            if(front->right){
                q.push(front->right);
                nodeToparent[front->right]=front;
            }
        }
        return res;
    }
    
    int burnTree(Node* TargetNode,map<Node*,Node*>&nodeToparent){
        int ans=0;
        map<Node*,bool>visited;
        queue<Node*>q;
        q.push(TargetNode);
        
        while(!q.empty()){
            bool flag=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                //for processing neighbouring nodes
                Node*front=q.front();
                q.pop();
                
                if(front->left && !visited[front->left]){
                    flag=1;
                    q.push(front->left);
                    visited[front->left]=1;
                }
                if(front->right && !visited[front->right]){
                    flag=1;
                    q.push(front->right);
                    visited[front->right]=1;
                }
                if(nodeToparent[front] && !visited[nodeToparent[front]]){
                    flag=1;
                    q.push(nodeToparent[front]);
                    visited[nodeToparent[front]]=1;
                }
            }
            if(flag==1) ans++;
        }
        return ans;
    }
  public:
    int minTime(Node* root, int target) 
    {
       //step 1: create nodeToparent mapping
       //step 2: find target node
       //step 3: burn the tree in min time
       
       map<Node*,Node*>nodeToparent;
       Node*TargetNode=createParentMapping(root,target,nodeToparent);
       int ans=burnTree(TargetNode,nodeToparent);
       return ans;
    }
};