#include<bits/stdc++.h>
using namespace std;
long long i,pos,total,x,y,z,t;
long long a[999999],parent[999999],rank1[999999],n,m,mini=9999999999999;
vector<pair<long long,pair<long long,long long>>> v;
int root(int v)
{
	while(v!=parent[v])
	{
		parent[v]=parent[parent[v]];
		v=parent[v];
	}
	return v;
}
void union1(long long a,long long b)
{
	int root_a=root(a);
	int root_b=root(b);
	if(rank1[root_a]>rank1[root_b])
	{
		parent[root_b]=root_a;
		rank1[root_b]=rank1[root_a]+rank1[root_b];
	}
	else
	{
		parent[root_a]=root_b;
		rank1[root_a]=rank1[root_a]+rank1[root_b];
	}
}
int check(long long a,long long b)
{
	long long root_a=root(a);
	long long root_b=root(b);
	if(root_a==root_b)

	{
		return 0;
	}
	else
	{
		union1(a,b);
		return 1;
	}
}


int main()
{
	
	cin>>n>>m;

	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		parent[i]=i;
		rank1[i]=1;
		if(a[i]<mini)
		{
			mini=a[i];
			pos=i;
		}

}
t=m;
while(m!=0)
{
	cin>>x>>y>>z;
	v.push_back(make_pair(z,make_pair(x,y)));
	m--;
}
for(i=1;i<=n;i++)
{
	if(i!=pos)
		v.push_back({a[i]+a[pos],{i,pos}});

}
sort(v.begin(),v.end());
total=0;
for(i=0;i<n-1+t;i++)
{
	//cout<<v[i].first;
	if(check(v[i].second.first,v[i].second.second))
	{
		
		total+=v[i].first;
	}
}
cout<<total;

return 0;
}