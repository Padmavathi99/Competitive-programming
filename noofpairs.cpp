#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i,p=0,a[1000],cnt[1000]={0};
	    cin>>n>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        cnt[a[i]]++;
	    }
	    sort(a,a+n);
	    if(a[0]==a[n-1]&&2*a[0]==k)
	    {
	        p=(n-1)*n/2;
	        //cout<<p<<endl;
	    }
	    else{
	    for(i=0;i<n;i++)
	    {
	        
	        if(k==2*a[i])
	        {
	            p+=cnt[a[i]]*(cnt[a[i]]-1)/2;
	            cnt[a[i]]=0;
	            //cout<<p<<endl;
	        }
	        else
	        {
	       		
	        	p+=cnt[k-a[i]]*cnt[a[i]];
	        	cnt[a[i]]=cnt[k-a[i]]=0;
	        	//cout<<p<<endl;
	        }
	        //cout<<a[i]<<" "<<k-a[i]<<" "<<cnt[a[i]]*cnt[k-a[i]]<<endl;
	    }
	    }
	    cout<<p<<endl;
	    
	}
	
	return 0;
}