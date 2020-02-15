#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int r,g,tot;
		float p;
		cin>>r>>g;
		if(r==0){
			p=1.000000;
		}
		tot=r+g;
		p=float(r)/float(tot);
		cout<<fixed<<setprecision(6)<<"\n"<<p;
		
	}
	return 0;
}
