#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,s;
		cin>>n;
		cin>>s;
		string res="";
		ll cnt=0;
		while(s>0&&cnt<2)
		{
			int rem=s%10;
			
			if(rem%2==1)
			{
				res+=to_string(rem);
				//cout<<res<<endl;
				cnt++;
			}
			s/=10;
		}
		if(cnt<2)
		{
			cout<<-1<<endl;
		}
		else
		{
			
			cout<<res<<endl;
		}
	}
	return 0;
}