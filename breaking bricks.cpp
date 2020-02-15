#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,w1,w2,w3;
		cin>>s>>w1>>w2>>w3;
		int b[]={w1,w2,w3};
		int sum=0,cnt=0;
		for(i=1;i<=3;i++)
		{
			if(sum+b[i]<=s)
			{
				sum+=b[i];
			}
			else
			{
				sum=0;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}