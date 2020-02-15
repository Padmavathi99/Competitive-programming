#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,i;
	string s;
	cin>>n>>t;
	cin>>s;
	while(t--){
		i=0;
		while(i<n-1){
			if(s[i]=='B'&&s[i+1]=='G'){
				swap(s[i],s[i+1]);
				i=i+2;
			}
			else{
				i++;
			}
		}
	}
	cout<<s;
	return 0;
}
