#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,t;
	cin>>n>>t;
	long long int s,d,i,r,c,f=0;
	vector<long long int> a;
	for(i=0;i<n;i++){
		cin>>s>>d;
		c=s;
		if(s==t){
			f=1;
			r=i+1;
		}
		while(c<t){
			c+=d;
	}
	a.push_back(c);
}
	if(f==1){
		cout<<r;
		return 0;
	}
	
	r=min_element(a.begin(),a.end())-a.begin()+1;
	cout<<r;
	return 0;
}
