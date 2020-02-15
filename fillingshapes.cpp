#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,ans;
	cin>>n;
	if(n<2||n%2==1)
	{
		cout<<0;
		
	}
	else
	{
		p=n/2;
		ans=pow(2,p)*(p-1);
		cout<<ans;
	}
	return 0;
}
