#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int slow=0, fast=0 ,i=0;
	do{
		slow=arr[slow];
		fast=arr[arr[fast]];
		
	}while(arr[slow]!=arr[fast]);
	fast=0;
	while(arr[slow]!=arr[fast]){
		fast=arr[fast];
		slow = arr[slow];
	}
	return arr[fast];
}
