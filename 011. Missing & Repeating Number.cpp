#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int p)
{
	// Write your code here 
	long long n = arr.size();
	long long Sn = (n*(n+1))/2;
	long long Sn2 = (n*(n+1)*(2*n+1))/6;
	long long S=0,S2=0;
	for(int i=0; i<n; i++){
		S=S+arr[i];
		S2 = S2 + (long long )arr[i]*(long long)arr[i];
	}
	long long val1 = S - Sn;
	long long val2 = S2 - Sn2;
	val2 = val2/val1;
	long long x = (val1+val2)/2;
	long long y=x-val1;
	return {y,x};
	
}
