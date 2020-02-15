#include<bits/stdc++.h>
using namespace std;
int longestincreasingsequence(int a[],int n)
{
	int dp[1000];
	dp[0]=1;
	
	for(int i=1;i<n;i++)
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j]&&dp[i]<dp[j]+1)
				dp[i]=dp[j]+1;
		}
		
	}
	return *max_element(dp,dp+n);

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[1000];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<longestincreasingsequence(a,n)<<endl;
	}

	
	return 0;
} 