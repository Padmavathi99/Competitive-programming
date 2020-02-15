#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,k,i,r,c,l=0,x,y;
		pair<long long int,long long int> p;
		vector< pair <long long int,long long int > > v;
		cin>>n>>m>>k;
		
		
		
		for(i=0;i<k;i++){
			cin>>r>>c;
			v.push_back(make_pair(r,c));
		}
	
		
		for(i=0;i<k;i++){
			
			
			x=v[i].first;
			y=v[i].second;
			
			
			if(find(v.begin(),v.end(),make_pair(x+1,y))==v.end()){
				
				l++;
			}
			if(find(v.begin(),v.end(),make_pair(x-1,y))==v.end()){
			
				l++;
			}
			if(find(v.begin(),v.end(),make_pair(x,y+1))==v.end()){
			
				l++;
			}
			if(find(v.begin(),v.end(),make_pair(x,y-1))==v.end()){
			
				l++;
			}
			
				
		}
	
		cout<<l<<"\n";
	}
	return 0;
}
