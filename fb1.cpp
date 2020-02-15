#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,cntb=0,cntd=0,v[5005];
	char str[5005];
	cin>>t;
	n=1;
	while(n<=t)
	{
		cin>>str;
		
		for(i=1;i<=sizeof(str);i++)
		{
			if(str[i]=='B')
			{
				cntb++;
				v[i]=1;
			}
			else
			{
				cntd++;
			}
		}
		if(cntb==0)
			cout<<"case#"<<n<<":N";
		
		
		
	}
	return 0;
}
