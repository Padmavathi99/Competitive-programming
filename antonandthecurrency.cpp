#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,o,flag=0,pos;
	string s;
	cin>>s;
	o=int(s[s.length()-1]);
	for(i=s.length()-1;i>=0;i--){
		if(int(s[i])%2==0){
			flag++;
		
		if(flag==1){
		
			pos=i;
		}
			
		if(o>int(s[i])){
			pos=i;
			
		}
	}
		}
		
	
	if(flag==0){
		cout<<-1;
		return 0;
	}
	swap(s[s.length()-1],s[pos]);
	cout<<s;
	return 0;
}
