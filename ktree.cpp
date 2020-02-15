#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,d,dp1[10000],dp2[10000],i,j;
	cin>>n>>k>>d;
	dp1[0]=1;
	for(i=1;i<=n;i++){
		dp1[i]=0;
		for(j=1;j<=k;j++){
			if(i>=j){
				dp1[i]+=dp1[i-j];
				dp1[i]=dp1[i]%1000000007;
			}
			else
				break;
		}
		
	}
	if(d==0||d==1){
		dp2[n]=0;
	}
	else if(d==2){
		dp2[n]=1;
	}
	else{
		dp2[0]=1;
	for(i=1;i<=n;i++){
		dp2[i]=0;
		for(j=1;j<d;j++){
			if(i>=j){
				dp2[i]+=dp2[i-j];
				dp2[i]=dp2[i]%1000000007;
			}
			else
				break;
		}
		
	}
	}
	cout<<abs((dp1[n]-dp2[n]+1000000007)%1000000007);
	
	return 0;
}
