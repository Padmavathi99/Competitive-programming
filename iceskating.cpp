#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x[100009],y[100009],xv[100009]={0},yv[100009]={0},cnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		if(!xv[x[i]]&&!yv[y[i]])
		{
			cnt++;
			xv[x[i]]=1;
			yv[y[i]]=1;
		}
		if(xv[x[i]]&&!yv[y[i]])
		{
			yv[y[i]]=1;
		}
		if(!xv[x[i]]&&yv[y[i]])
		{
			xv[y[i]]=1;
		}
	}
	cout<<cnt-1;
}