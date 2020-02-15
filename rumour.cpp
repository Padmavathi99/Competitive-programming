#include<bits/stdc++.h>
using namespace std;
long long visited[100009]={0},c[100009];
vector<long long> g[100009],t[100009];

void dfs(long long i,long long n,long long cnt)
{
	visited[i]=1;
	for(auto j=g[i].begin();j!=g[i].end();j++)
	{
		t[cnt].push_back(c[*j]);
		if(!visited[*j])
		{
			dfs(*j,n,cnt);
		}
	}
}
int main()
{
	long long n,m,a,b,i,cost=0,cnt=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>c[i];
	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(i=1;i<=n;i++)
	{
		if(!visited[i])
		{	
			cnt++;
			t[cnt].push_back(c[i]);
			dfs(i,n,cnt);
			
			
		}
			
	}
	
	for(i=1;i<=cnt;i++)
	{
		if(!(t[i].empty()))
		{
			cost+=*min_element(t[i].begin(),t[i].end());
			
		}
		
		
			
	}
	cout<<cost;
	return 0;
}
