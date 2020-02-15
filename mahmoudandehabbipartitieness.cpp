#include<bits/stdc++.h>
using namespace std;
long long c=0;
vector <long long> g[100000];
long long visited[100009]={0};
long long height[100000]={0};
void dfs(long long i)
{
	
	visited[i]=1;
	for(auto j=g[i].begin();j!=g[i].end();j++)
	{
		
		if(!visited[*j])
		{
			height[*j]=height[i]+1;
			dfs(*j);
			
		}
	}
}
int main()
{
	long long n,i,cnt=0,u,v,c1=0,c2=0;
	cin>>n;
	for(i=1;i<=n-1;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
		
	}
	height[1]=1;
	dfs(1);
	for(i=1;i<=n;i++)
	{
		if(height[i]%2==1)
			c1++;
		else
			c2++;
	}
	cout<<c1*c2-(n-1);
	
	return 0;
}
