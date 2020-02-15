#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,a[100005],cnt[100005]={0},dp[100005];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
	}
	sort(a+1,a+n+1);
	dp[0]=0;
	dp[1]=cnt[1];
	for(i=2;i<=a[n];i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+i*cnt[i]);
	}
	cout<<dp[a[n]];
	return 0;
}
