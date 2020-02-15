#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,k;
	cin>>t;
	while(t--){
		long long cnt=0;
		cin>>n>>k;
		if(n==0){
			cout<<0;
		}
		else{
			while(n>0){
			if(n%k==0){
				cnt=cnt+1;
				n=n/k;
				
				
			}
			else{
				cnt=cnt+(n%k);
				n=n-(n%k);
				
			}
		}
	}
	cout<<cnt<<endl;
	}
	return 0;
}
