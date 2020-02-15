#include<bits/stdc++.h>
#define MAX 5001
using namespace std;
int main()
{
	long long n,m,k,a[MAX],s,i,j,sum,p[MAX];
	cin>>n>>m>>k;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==1){
			p[i]=a[i];
		}
		else{
			p[i]=p[i-1]+a[i];
		}
	}

	long long dp[k+1][n+1];
	for(i=0;i<=k;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0 || i*m>j)
			{
				dp[i][j]=0;
			}
			else
			{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+p[j]-p[j-m]);
			}

		}
	}

	cout<<dp[k][n];
	return 0;
}
