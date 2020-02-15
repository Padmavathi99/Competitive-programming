#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length();
	int dp[n],i,count=0;
	for(i=0;i<s.length();i++){
		if(int(s[i])%2==0){
			count++;
		}
	}
	dp[0]=count;
	for(i=1;i<s.length();i++){
		if(int(s[i-1])%2!=0){
			dp[i]=dp[i-1];
		}
		else{
			dp[i]=dp[i-1]-1;
		}
		
	}
	for(i=0;i<s.length();i++){
		cout<<" "<<dp[i];
	}
	return 0;
}
