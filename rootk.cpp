#include<iostream>
#include<bits/stdc++.h>
#define max 1000000;
using namespace std;

int main(){
	int n,k,d,dp[1000],dp1[1000],i;
	cin>>n>>k>>d;
	dp[1]=1;
	for(i=2;i<=n;i++){
		if(i<=k){
			dp[i]=dp[i-1]+1;
			
		}
		else{
			dp[i]=dp[i-1];
		}
	}
	for(i=2;i<d;i++){
		if(i<=k){
			dp1[i]=dp[i-1]+1;
			
		}
		else{
			dp1[i]=dp[i-1];
		}
	}
	cout<<dp[n]-dp[d-1];
	
	return 0;
}
