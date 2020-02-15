#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long z,o,l,cnt,c,zc,oc;
	string r;
	cin>>z>>o;
	zc=z;
	oc=o;
	r=" ";
	if(o>2*z+2||z>o+1)
	{
		cout<<-1;
		return 0;
	}
	if(o==2*z+2)
	{
	    
	 
		c=o/2-1;
		while(c>0)
		{
			cout<<"110";
			c--;
 
		}
		
	cout<<"11";
		return 0;
	}
	else if(o==z)
	{
	    l=z+o;
	    while(l>0)
	    {
	        cout<<"10";
	        l-=2;
	    }
	}
	else if(o<z)
	{
	    l=z+o;
	    zc=z;
	    oc=o;
	    while(l>0)
	    {
	        if(zc>0)
	        {
	            cout<<"0";
	            zc--;
	            l--;
	        }
	        if(oc>0)
	        {
	            cout<<"1";
	            oc--;
	            l--;
	        }
	        
	        
	    }
	}
	
	else{
	l=z+o;
	cnt=o/2;
	c=0;

	while(c<cnt-1&&l-3>0&&zc-1>0&&oc-2>0)
	{
		
		r+="110";
		c++;
		l-=3;
		zc-=1;
		oc-=2;
		if(oc==zc)
		    break;
		
	}
	while(l>0)
	{
		if(oc>0)
		{
		 r+="1";
		oc-=1;
		l--;
		}
		if(l>0)
		{
		    if(zc>0)
		    {
		        r+="0";
		        zc-=1;
			    l--;
		    }
			
		}
	}
	}
	
	
	cout<<r;


	return 0;
}