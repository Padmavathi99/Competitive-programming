#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,q,a[1000009],i,b,ans;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	sort(a,a+n);
	cin>>q;
	while(q--){
		cin>>b;
		ans=upper_bound(a,a+n,b)-a;
		cout<<ans<<endl;
		
	}
	
	
	
	
		
	
	
	return 0;
}
