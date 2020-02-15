#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,a[1000],p[1000],i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<0)
		{
			a[i]=-(a[i]);
		}
		if(i==1)
		{
			p[i]=a[i];
		}
		else
		{
			p[i]=p[i-1]+a[i];
		}
		
	}
	cout<<p[n];
	return 0;
	
}
