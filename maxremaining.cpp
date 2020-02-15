#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int a[100000];
int main(){
	long long int n,i,max,t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	t=n-2;
	if(a[t]==a[n-1]){
		while(a[t]==a[n-1])
			t--;
	}

	
	cout<<a[t];
	return 0;
}
