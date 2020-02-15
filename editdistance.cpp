#include<bits/stdc++.h>
using namespace std;
int editdistance(string p,string q,int m,int n)
{
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else if(p[i-1]==q[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
			{
				dp[i][j]=1+min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
			}

		}
	}
	return dp[m][n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		string p,q;
		cin>>p>>q;
		cout<<editdistance(p,q,m,n)<<endl;
	}
	return 0;
}