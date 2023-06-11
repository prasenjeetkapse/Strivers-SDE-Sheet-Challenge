#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long cs=0;
    long long largest=INT_MIN;
    for(int i=0; i<n; i++){
        cs=cs+arr[i];
        if(cs>largest){
            largest=cs;
        }
        if(cs<0){
            cs=0;
        }
        
    }
    return max(cs,largest);
}
