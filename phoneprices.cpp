#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt=1,i,j;
		cin>>n;
		int p[n]={0};
		for(i=0;i<n;i++)
		{
			cin>>p[i];
			j=1;
			while(j<=5&&i-j>=0)
			{
				if(p[i]>=p[i-j])
					break;
				j++;
			}
			if(j==6)
				cnt++;

		}
		cout<<cnt<<endl;
	}
	return 0;
}