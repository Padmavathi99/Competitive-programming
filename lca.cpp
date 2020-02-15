#include<bits/stdc++.h>
using namespace std;
#define logn 25
vector <long long> g[100005];
long long visited[100005],height[100005],parent[100005][21],n;

void dfs(long long i)
{
	visited[i]=1;
	for(auto j=g[i].begin();j!=g[i].end();j++)
	{
		if(!visited[*j])
		{
			height[*j]=height[i]+1;
			parent[*j][0]=i;
			dfs(*j);
		}
	}
}
void findparent()
{
	for(int j=1;j<=logn;j++)
	{
		for(int i=1;i<=n;i++)
		{
			parent[i][j]=parent[parent[i][j-1]][j-1];
		}
	}
}
long long lca(long long u,long long v)
{
	long long l;
	long long x=u;
	long long y=v;
	if(height[u]<height[v])
		swap(u,v);
	for(int j=logn;j>=0;j--)
	{
		
		long long t=1<<j;
		if(height[u]-t>=height[v])
			u=parent[u][j];	
	}
	
	if(u==v)
	{
		l=u;
		cout<<height[x]+height[y]-2*height[l];
		return 0;
	}
		
	//cout<<height[u]<<" "<<height[v]<<endl;
	for(int j=logn;j>=0;j--)
	{
		if(parent[u][j]==0||parent[v][j]==0||parent[u][j]==parent[v][j])
			continue;
		u=parent[u][j];
		v=parent[v][j];
	}
	 l=parent[u][0];
	 
	cout<<height[x]-height[l]+height[y]-height[l]<<endl;
}
int main()
{
	long long i,u,v,q;
	cin>>n;
	for(i=1;i<=n-1;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1);
	findparent();
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>u>>v;
		lca(u,v);
	}
	
	
	
	return 0;
}
