#include <bits/stdc++.h> 
using namespace std;
class Queue {
    int *arr;
    int size;
    int fron;
    int rear;
public:
    Queue() {
        // Implement the Constructor
        size=100001;
        arr=new int[size];
        fron=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(fron==rear)return true;
        else return false;
    }

  void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear++] = data;
            //rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(fron==rear)return -1;//queue is empty
        else {
            int ans=arr[fron];
            arr[fron]=-1;
            fron++;
            if(rear==fron){
                fron=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(fron==rear)return -1;
        else return arr[fron];
    }
};