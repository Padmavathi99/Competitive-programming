#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,k,j,a[100009],b[100009];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	i=0;
	j=0;
	k=n-1;
	while(i<n)
	{
		if(i%2==1)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			b[k]=a[i];
			k--;
		}
		i++;
			
	}
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";
	return 0;	
}
