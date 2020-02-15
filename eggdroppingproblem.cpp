#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
long long maxi=0;
void eggdrop(int n,int k)
{
	for(int i=1;i<=n;i++)
	{
		dp[i][1]=1;
		dp[i][0]=0;
	}
	for(int i=1;i<=k;i++)
	{
		dp[1][i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			dp[i][j]=maxi;
			for(int x=1;x<=j;x++)
			{
				if(dp[i][j]<1+max(dp[i-1][x-1],dp[i][j-x]))
					dp[i][j]=1+max(dp[i-1][x-1],dp[i][j-x]);
			}
		}
	}
	cout<<dp[n][k];
}
int main()
{	
	long long n,k;
	cin>>n>>k;
	eggdrop(n,k);
	return 0;
}
