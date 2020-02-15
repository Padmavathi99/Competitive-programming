#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int no;
	cin>>no;
	int a[no],i,n;
	set<int> s;
	for(i=0;i<no;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	if(s.size()>3){
		cout<<-1;
		return 0;
	}
	if(s.size()==1){
		cout<<0;
		return 0;
	}
	if(s.size()==2){
		vector<int> v(s.begin(),s.end());
		if((v[1]-v[0])%2==0){
			n=(v[1]-v[0])/2;
			cout<<n;
			return 0;
		}
		else{
			n=v[1]-v[0];
			cout<<n;
			return 0;
		}
		
	}
	if(s.size()==3){
		vector<int> v(s.begin(),s.end());
		if((v[1]-v[0])!=(v[2]-v[1]))
			cout<<-1;
		
		else{
			cout<<(v[1]-v[0]);
			return 0;
		}
	}
	return 0;
}
