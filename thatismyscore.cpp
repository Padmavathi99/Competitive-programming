#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,s,score=0;
		cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>p>>s;
			if(p>=1&&p<9)
			{
				m[p]=max(m[p],s);
			}
			else
				continue;

		}
		for(auto it=m.begin();it!=m.end();it++)
		{
			score+=it->second;
			
		}

		cout<<score<<endl;
	}
	return 0;
}