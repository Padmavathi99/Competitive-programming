#include<bits/stdc++.h>
using namespace std;

int main()
{
	char bur[100];
	long long int br=0,sr=0,cr=0,ba=0,sa=0,ca=0,money=0,m=0,b=0,s=0,c=0,bp=0,sp=0,cp=0,mid=0,high=0,low=0,ans=0,i;
	cin>>bur;
	for(i=0;i<strlen(bur);i++)
	{
		if(bur[i]=='B')
			br++; 
		if(bur[i]=='S')
			sr++;
		if(bur[i]=='C')
			cr++;
	}
	
	cin>>ba>>sa>>ca;
	cin>>bp>>sp>>cp;
	cin>>m;
	
	high=10000000000009;
	
	low=0;
	
	while(low<=high)
	{	
	    long long bc=0,sc=0,cc=0;
		money=m;
		//cout<<low<<high<<" ";
        mid=(low+high)/2;
        //cout<<mid<<endl;
		b=br*mid;
		s=sr*mid;
		c=cr*mid;
		if(b>=ba)
			bc=b-ba;
		if(s>=sa)
			sc=s-sa;
		if(c>=ca)
			cc=c-ca;
		if(((bc*bp)+(sc*sp)+(cc*cp))<=money)
		{   
		    if(mid>ans)
			    ans=mid;
			low=mid+1;
			
		}
		else
		{
		    high=mid-1;
		}
	}
	cout<<ans;
	return 0;
}
