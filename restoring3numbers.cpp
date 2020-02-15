#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int v[4],a,b,c,s,i;
	for(i=0;i<4;i++)
		cin>>v[i];
	sort(v,v+4);
	s=v[3];
	c=s-v[0];
	
		b=v[1]-c;
		a=s-(b+c);
	
	
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
