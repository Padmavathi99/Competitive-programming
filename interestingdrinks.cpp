#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q,p[100009],i,a;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	sort(p,p+n);
	
	
	cin>>q;
	while(q--){
		int cnt=0;
		cin>>a;
		if(a<p[1]){
		cout<<0;
		
	}
	else if(p[n]<=a){
		cout<<n;
		
	}
	else{
	
		for(i=1;i<=n;i++){
			if(p[i]<=a)
				cnt++;
			else
				break;
		}
		cout<<cnt<<endl;
	}
}
	return 0;
}
