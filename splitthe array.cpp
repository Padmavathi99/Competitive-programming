#include<bits/stdc++.h>
using namespace std;
int main()
{
// 	long long n,a[100005],flag=0,i,p[100005],cnt,ways=0,sum;
// 	vector<long long> v1,v2;
// 	cin>>n;
// 	p[1]=a[1];
// 	for(i=1;i<=n;i++)
// 	{
// 		cin>>a[i];
// 		if(a[i]!=0)
// 		{
// 			flag=1;
// 		}
		
// 			p[i]=p[i-1]+a[i];
		
// 	}
	
// 	if(p[n]%3!=0)
// 	{
// 		cout<<0;
// 		return 0;
// 	}
// 	else if(p[n]==0)
// 	{
// 		if(flag==0)
// 		{
// 		cout<<1;
// 		return 0;
// 		}
// 		else
// 		{
// 			ways=(n-2)*(n-1)/2;
// 			cout<<ways;
// 			return 0;
// 		}
			
// 	}
// 	else
// 	{
// 	sum=p[n];
// 	for(i=1;i<=n;i++)
// 	{
// 		if(p[i]==sum/3)
// 			v1.push_back(i);
// 		else if(p[i]==2*sum/3)
// 			v2.push_back(i);
			
// 	}
// 	sort(v1.begin(),v1.end());
// 	sort(v2.begin(),v2.end());
	
// 	for(auto i=v1.begin();i!=v1.end();i++)
// 	{
// 		cnt=upper_bound(v2.begin(),v2.end(),*i)-v2.begin();
// 		cnt=v2.size()-cnt;
// 		ways+=cnt;
// 	}
// 	cout<<ways;
// }
	cout<<1^1;
	return 0;
}
