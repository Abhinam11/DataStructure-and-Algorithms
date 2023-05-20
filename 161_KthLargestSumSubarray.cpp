#include<bits/stdc++.h>
using namespace std;
int getKthLargest(vector<int> &arr, int k)
{
	int n=arr.size();
	vector<int>sum;
	for(int i=0;i<n;i++){
		int res=0;
		for(int j=i;j<n;j++){
			res+=arr[j];
		sum.push_back(res);
		}
	}
	sort(sum.begin(),sum.end());
	reverse(sum.begin(),sum.end());
	return sum[k-1];
}