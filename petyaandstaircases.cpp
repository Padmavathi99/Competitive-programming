#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int d[3000];
int main(){
	long long int n,m,i,c=1,s;
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>d[i];
		if(d[i]==1||d[i]==n){
			cout<<"NO";
			return 0;
		}
}
sort(d,d+m);
for(i=0;i<m;i++){
	if(d[i]+2==d[i+2]){
		cout<<"NO";
		return 0;
	}
}
	cout<<"YES";
	return 0;
}
