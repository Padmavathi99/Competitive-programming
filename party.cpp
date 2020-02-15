#include<bits/stdc++.h>
using namespace std;
long long visited[100009]={0};
vector<long long> g[100009];
long long height[100009]={0};
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
	long long n,m[100000],i,ht;
	cin>>n;
	for(i=1;i<=n;i++){
		
		cin>>m[i];
		if(m[i]!=-1)
		{
			g[m[i]].push_back(i);
			//g[i].push_back(m[i]);
		}
		
		
	}
	for(i=1;i<=n;i++)
	{
		if(m[i]==-1)
		{
			height[i]=1;
			dfs(i);
			
			
		}
	}
	
	ht=*max_element(height+1,height+n+1);
	cout<<ht;
	
	return 0;	
}