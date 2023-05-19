#include<bits/stdc++.h>
using namespace std;
  void heapify(vector<int>&arr,int n,int i){
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]<arr[smallest]) smallest=left;
    if(right<n && arr[right]<arr[smallest]) smallest=right;
    if(smallest!=i){
        swap(arr[smallest],arr[i]);
        heapify(arr,n,smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
   
    return arr;
}
void HeapSort(vector<int> arr,int n){
    int t=n;
    while(t>1){
        //step1:swap root to last node
        swap(arr[1],arr[t-1]);
        //size decrement
        t--;
        //step2:put root node to it's correct position
        heapify(arr,t,1);
    }
}
int main(){
//maxheap
priority_queue<int>pq;
pq.push(1);
pq.push(2);
pq.push(3);
pq.push(5);
pq.push(4);
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
cout<<endl;
//minheap
priority_queue<int,vector<int>,greater<int>>minheap;
minheap.push(1);
minheap.push(2);
minheap.push(3);
minheap.push(5);
minheap.push(4);
while(!minheap.empty()){
    cout<<minheap.top()<<" ";
    minheap.pop();
    }
    cout<<endl;
return 0;
}
