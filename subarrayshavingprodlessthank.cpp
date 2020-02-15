#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,a[10000],cnt=0,i,j;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		i=0;
		j=i+1;
		int prod=a[i];
		while(i<n-1)
		{
			int c=1;
			while(j<n&&prod*a[j]<k)
			{
				j++;
				c++;
			}
			cnt+=c*(c+1)/2;
			
			i++;
			prod=prod/a[i];
		}
		cout<<cnt<<endl;


	}
	return 0;
}

