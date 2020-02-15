#include<bits/stdc++.h>
using namespace std;
int arr[100],tree[100],visited[1000]={0};
void build(int node,int start,int end)
{

	if(start==end)
		tree[node]=arr[start];
	else
	{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
void update(int start,int end,int idx,int node,int val)
{
	if(start==end)
	{
		arr[idx]=val;
		tree[node]=val;
	}
}


int main()
{
	 arr[]={1,2,3,4,5};
	 dfs(1);
	

	return 0;
}