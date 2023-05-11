#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};


class Solution
{
    void solve(Node*root,int sum,int &maxsum,int len,int &maxlen){
    
        //base case
        if(root==NULL){
            if(len>maxlen){
                maxlen=len;
                maxsum=sum;
            }
            else if(len==maxlen){
                maxsum=max(sum,maxsum);
            }
            return;
        }
        
        sum+=root->data;
        //recursive calls
        solve(root->left,sum,maxsum,len+1,maxlen);
        solve(root->right,sum,maxsum,len+1,maxlen);
    }
        
    
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int len=0;
        int maxlen=0;
        int sum=0;
        int maxsum=INT_MIN;
        solve(root,sum,maxsum,len,maxlen);
        return maxsum;
    }
};

