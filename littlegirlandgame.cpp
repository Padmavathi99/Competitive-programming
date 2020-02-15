#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<char,int> m;
	int i,count=0;
	char c='a';
	for(i=0;i<26;i++){
		m[c]=0;
		c++;
	}
	string s;
	cin>>s;
	for(i=0;i<s.length();i++){
		m[s[i]]++;
	}
	c='a';
	for(i=0;i<m.size();i++){
		if(m[c]%2==1)
			count++;
		c++;
	}
	if(count==0){
		cout<<"First\n";
		return 0;
	}
	if(count%2==1){
		cout<<"First\n";
		return 0;
	}
	if(count%2==0){
		cout<<"Second\n";
		return 0;
	}
	
		
	return 0;
}
