#include<bits/stdc++.h>
using namespace std;
int g[100][100]={0};
int vi[100]={0};
queue<int> q;
void bfs(int n,int v){
	int i;
	cout<<n;
	vi[n]=1;
	for(i=0;i<v;i++){
		if(g[n][i]&&!vi[i])
			q.push(i);
			
	}
	int k=q.front();
	while(!q.empty()&&!vi[k]){
		k=q.front();
		q.pop();
		bfs(k,v);
	}
}
int main(){
	int v,i,j,n;
	cin>>v>>n;
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
			cin>>g[i][j];
	bfs(n,v);
	
}
