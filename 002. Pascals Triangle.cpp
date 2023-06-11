#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> res;
  vector<long long int>v;
  v.push_back(1);
  res.push_back(v);
  for(int i=0; i<=n-2; i++){
    v.push_back(1);
    long long int m=v.size();
    for(int j=m-2; j>=1; j--){
      v[j]=v[j]+v[j-1];
    }
    res.push_back(v);
  }
  return res;
}
