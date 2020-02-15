#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t,a[100000],o[100000],p[100000],sum=0,c=0,i,cnt=0;
	
	cin>>n>>t;
	for(i=0;i<n;i++)
	{
		cin>>a[i];

		if(sum+a[i]<=t)
		{
			sum+=a[i];
			c++;
			
			o[i]=0;

		}
		p[i]=a[i];
	}

	sort(p,p+n,greater<int>());
	cnt=0;
	for(i=c-1;i<n;i++)
	{
		long long j=0;
		cout<<sum<<p[j]<<endl;
		if(sum+a[i]>t)
		{
		while(sum-p[j]+a[i]>t)
		{
			sum-=p[j];
			cnt++;
			j++;
			cout<<"h";
		}
		sum=t;
		o[i]=cnt;
		cout<<cnt;

		}
		
		
		

	}

	for(i=0;i<n;i++)
	{
		cout<<o[i]<<" ";
	}
	return 0;
}