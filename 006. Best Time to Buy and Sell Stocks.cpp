#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    // Write your code here.
    int res=INT_MIN;
    int curr_min=INT_MAX;
    int n=arr.size();
    for(int i=0; i<n; i++){
        curr_min=min(curr_min, arr[i]);
        res = max(res,arr[i]-curr_min);        
    }
    return res;
}
