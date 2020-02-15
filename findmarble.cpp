#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> v,p,dif;
int a[100000];
int main(){
	int n,s,d,i,t,c=0;
	cin>>n>>s>>d;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	
	
	if(s==d){
		cout<<0;
		return 0;
	}
	if(a[s]==s){
		cout<<-1;
		return 0;
	}
	t=s;
	while(a[t]!=s){
		t=a[t];
		c++;
		if(t==d){
			cout<<c;
			return 0;
		}
}
	
	
	


	cout<<-1;

		
	return 0;
}
