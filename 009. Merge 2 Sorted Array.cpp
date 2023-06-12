#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> res;
	int l1=0, l2=0;
	while(l1<m && l2<n){
		if(arr1[l1]<arr2[l2]){
			res.push_back(arr1[l1]);
			l1++;
			
		}
		else{
			res.push_back(arr2[l2]);
			l2++;
			
		}
	}
	while(l1<m){
		res.push_back(arr1[l1]);
		l1++;
	}
	while(l2<n){
		res.push_back(arr2[l2]);
		l2++;
	}
	return res;
}
