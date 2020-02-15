#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,cnt=0;
		cin>>n;
		long long a[n];
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		if(m[2]>1)
			cnt+=(m[2]*(m[2]-1))/2;
		if(m[0]>1)
			cnt+=(m[0]*(m[0]-1))/2;

		cout<<cnt<<endl;


	}
	return 0;
}