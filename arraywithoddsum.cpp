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
		long long odd=0,even=0;
		for(long long i=0;i<n;i++)
		{
			long long x;
			cin>>x;
			if(x%2==1)
				odd++;
			else
				even++;
			

	}
	if(odd==0)
		cout<<"NO"<<endl;
	else if(odd%2==1)
		cout<<"YES"<<endl;
	else
	{
		if(even>0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
}
