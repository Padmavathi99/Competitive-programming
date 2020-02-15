#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,t,i,a;
	string s;
	char c;
	cin>>t;
	while(t--){
		vector<int> len;
		long long int r=0,l=0,tot=0,t;
		cin>>n;
		cin>>s>>c;
		tot=n*(n+1)/2;
		for(i=0;i<n;i++){
			if(s[i]!=c){
				t=i;
				while(s[t]!=c&&t<n){
					
				t++;
				l++;
			}
			len.push_back(l);
			l=0;
			i=t;
			}
		}
			
		for(i=0;i<len.size();i++){
			r+=(len[i])*(len[i]+1)/2;
			
			
		}
		
		a=tot-r;
		cout<<a<<"\n";
		
		
		
	}
	return 0;
}
