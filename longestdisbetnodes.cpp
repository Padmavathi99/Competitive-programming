#include<bits/stdc++.h>
using namespace std;
long long n,e,ht[1000],u,v,t1,t2,k,i,visited[1000],path_index,path[1000],parent[1000];
vector<long long> g[1000];
queue<long long> q;
void dfs(long long m)
{
	if (m !=t2)
	{
		visited[m]=1;
		for(auto it = g[m].begin();it !=g[m].end();++it)
		{
			if(!visited[*it])
			{
				parent[*it]=m;
				dfs(*it);
			}
		}

	}

}
long long bfs(long long m)
{
	for(auto it =g[m].begin(); it !=g[m].end();it++)
	{
		if(ht[*it]==-1)
		{
			ht[*it]=ht[m]+1;
			q.push(*it);
		}
	}

	while(!q.empty())
	{	k=q.front();
		q.pop();
		bfs(k);
	}
	return (max_element(ht+1,ht+n+1)-ht);	
}
int main()
{
	memset(ht+1,-1,sizeof(ht));
	cin>>n;
	cin>>e;
	for(i=1;i<=e;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	ht[1]=0;
	t1=bfs(1);


	memset(ht+1,-1,sizeof(ht));
	ht[t1]=0;
	t2=bfs(t1);
	dfs(t1);

	cout<<t1<<" "<<t2<<"the length is :"<<ht[t2]<<endl;
	int k=t2;
	cout<<t2<<" ";
	while(parent[k] != 0)
	{
		cout<<parent[k]<<" ";
		k=parent[k];
	}
		return 0;
}
