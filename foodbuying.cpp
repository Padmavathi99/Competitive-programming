#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,temp;
		cin>>n;
		temp=n;
		long long extra=0;
		while(n>=10)
		{
			extra+=(n/10);
			//cout<<extra;
			n=(n/10)+(n%10);

		}
		cout<<temp+extra<<endl;
	}
	return 0;
}