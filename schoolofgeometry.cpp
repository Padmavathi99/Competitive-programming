#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n],b[n];
		long long i;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(b,b+n);
		long long ans=0;
		for(i=0;i<n;i++)
		{
			ans+=min(a[i],b[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}