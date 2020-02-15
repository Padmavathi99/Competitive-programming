#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,i,a[1000];
	cin>>t;
	while(t--)
	{
		long long cnt=0,sum=0,rem1=0,rem2=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%3==0)
			{
				
				cnt++;
				//cout<<cnt<<endl;
			}
			else if(a[i]%3==1)
				rem1++;
			else if(a[i]%3==2)
				rem2++;
		}
		
		cnt+=min(rem1,rem2);
		//cout<<cnt<<endl;
		if(rem1<rem2)
		{
			cnt+=(rem2-rem1)/3;
			//cout<<cnt<<endl;
		}
		else
		{
			cnt+=(rem1-rem2)/3;
			//cout<<cnt<<endl;
		}
		
		cout<<cnt<<endl;
	}
	return 0;
}
