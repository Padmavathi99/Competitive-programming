#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,a[1000000],o=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);

	for(i=1;i<=n;i++)
	{
		if(a[i] != i)
		{
			o=o+ abs(a[i]-i);
		}

	}
	cout<<o;

	return 0;
}
