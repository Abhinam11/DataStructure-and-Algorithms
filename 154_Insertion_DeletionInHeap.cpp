#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int size;
    int arr[100];
    heap(){
        arr[0]=-1;
        size=0;
    }
   void insert(int x){
    //step1:insert at the end
        size++;
        int i=size;
        arr[i]=x;
        //step2: sift up
        while(i>1){
            int parent=i/2;
            if(arr[i]>arr[parent]){
                swap(arr[parent],arr[i]);
                i=parent;
            }
            else{
                return;
            }
          }
        }
        void print(){
            for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
            }
        }
        void deletefromheap(){
            if(size==0) return;
            //step1:replace rootnode with last
            arr[1]=arr[size];
            //step2: remove last  node
            size--;
            //step3:propagate root node to it's correct position
            int i=1;
            while(i<size){
                int leftindex=2*i;
                int rightindex=2*i+1;
                if(leftindex<size && arr[i]<arr[leftindex]){
                    swap(arr[i],arr[leftindex]);
                    i=leftindex;
                }
                else if(rightindex<size && arr[i]<arr[rightindex]){
                    swap(arr[i],arr[rightindex]);
                    i=rightindex;
                }
                else{
                    return ;
                }
            }
        }
    };
    void heapify(int arr[],int n,int i){
          int largest=1;
          int left=2*i;
          int right=2*i+1;
          if(left<=n && arr[left]>arr[largest]){
            largest=left;
            }
            if(right<=n && arr[right]>arr[largest]){
                largest=right;
                }
                if(largest!=i){
                    swap(arr[i],arr[largest]);
                    heapify(arr,n,largest);
                    }
    }
  
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    cout<<endl;
    h.deletefromheap();
    h.print();
    cout<<endl;
    int arr[6]={-1,54,53,55,52,50};
    int n=6;
    for(int i=n/2;i>0;i--){
        heapify(arr,6,i);
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}


