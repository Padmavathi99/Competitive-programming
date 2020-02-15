
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long l,r,a,ans;
	cin>>l>>r>>a;
	if(l!=r&&a==0)
	{
	    ans=2*min(l,r);
	    
	    
	}
	
	if(l==r)
	{
	    ans=2*(l+a/2);
	}
	if(l!=r)
	{
	    if(a<abs(l-r))
	    {
	        ans=2*(min(l,r)+a);
	        
	    }
	    else
	    {
	        ans=2*(max(l,r)+((a-abs(l-r))/2));
	    }
	}
	cout<<ans;
	return 0;
	
}