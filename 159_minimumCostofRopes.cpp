 #include<bits/stdc++.h>
using namespace std;
 long long minCost(long long arr[], long long n) {
        // create a min heap
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        long long cost=0;
        while(pq.size()>1){
            long a=pq.top();
            pq.pop();
            long b=pq.top();
            pq.pop();
            long sum=a+b;
            cost+=sum;
            pq.push(sum);
        }
        return cost;
    }