#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>> v;
	int m,s,j,n[100],l[100],sum=0,i;
	cin>>m>>s;
	if(m==1&&s==0)
	{
		cout<<0<<" "<<0;
		return 0;
	}
	if(s>m*9||s<1)
	{
		cout<<-1<<" "<<-1;
		return 0;
	}
	
	j=9;
	for(i=1;i<=m;i++)
	{
		if(sum+j<=s)
		{
			n[i]=j;
			sum+=j;
		}
		else
		{
			while(sum+j>s)
			{
				j--;
			}
			n[i]=j;
			sum+=j;
			
		}
	}
	for(i=1;i<=m;i++)
	{
		l[i]=n[i];
	}
	
	sort(n+1,n+m+1);
	if(n[1]!=0)
	{
		for(i=1;i<=m;i++)
	{
		cout<<n[i];
	}
	
	}
	else{
	i=1;
	if(n[1]==0)
	{
		while(n[i]==0)
		{
			i++;
		}
		n[1]=1;
		n[i]=n[i]-1;
	}
	for(i=1;i<=m;i++)
	{
		cout<<n[i];
	}
}
	cout<<" ";
	for(i=1;i<=m;i++)
	{
		cout<<l[i];
	}
	


	return 0;
}