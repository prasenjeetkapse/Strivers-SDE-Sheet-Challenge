#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &arr)
{
	// Write your code here.
	int col_0=1;
	int m=arr[0].size();
	int n= arr.size();
	
	for(int i=0;i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j]==0){
				arr[i][0]=0;
				if(j!=0){
					arr[0][j]=0;
					
				}
				else{
					col_0=0;
				}
			}
			
		}
	}
	for(int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			if(arr[i][j]!=0){
				if (arr[i][0] == 0 || arr[0][j] == 0) {
					arr[i][j] = 0;
				}
			}
	}
	}
	if(arr[0][0]==0){
		for(int j=0;j<m; j++){
			arr[0][j]=0;
		}
	}
	if(col_0==0){
		for(int i=0; i<n; i++){
			arr[i][0]=0;
		}
	}
}
