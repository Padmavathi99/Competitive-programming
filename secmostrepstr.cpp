#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		map<string,int> m;
		set<int> s;
		while(n--)
		{
			string s;
			cin>>s;
			m[s]++;
		}
		for(auto it=m.begin();it!=m.end();it++)
		{
			s.insert(it->second);
		}
		auto itr=s.end();
		itr--;
		itr--;
		for(auto it=m.begin();it!=m.end();it++)
		{
			if(it->second==*itr)
			{
				cout<<it->first<<endl;
				break;
			}
		}
	}
	return 0;
}