#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int a[n],i,g[n][n];
	map<long long int,long long int>m;
	for(i=0;i<n;i++){
		cin>>a[i];
		m.insert({a[i],i});
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(m[a[i]]!=i){
			g[m[a[i]],i]=
		}
	}
		
	return 0;
}
