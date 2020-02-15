#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n,m,i,pos;
	string x,y,s,temp;
	vector<string> l1,l2,lec,notes;
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>x>>y;
		l1.push_back(x);
		l2.push_back(y);
	}
	for(i=0;i<n;i++){
		cin>>s;
		lec.push_back(s);
	}
	for(i=0;i<n;i++){
		pos=find(l1.begin(),l1.end(),lec[i])-l1.begin();
		if(l1[pos].length()<=l2[pos].length()){
			notes.push_back(l1[pos]);
		}
		else{
			notes.push_back(l2[pos]);
		}
	}
	
	for(i=0;i<n;i++){
		
		cout<<notes[i]<<" ";
	}
	return 0;
	
}
