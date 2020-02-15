#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,k,i,r,c,l=0,x,y,j;
		pair<long long int,long long int> p;
		vector< pair <long long int,long long int > > v;
		cin>>n>>m>>k;
		
		
		
		for(i=0;i<k;i++){
			cin>>r>>c;
			v.push_back(make_pair(r,c));
		}
	
		
		for(i=0;i<k;i++){
			int flag1=0,flag2=0,flag3=0,flag4=0;
			
			x=v[i].first;
			y=v[i].second;
			
			for(j=0;v[j].first<=x+1&&v[j].second<=y+1;j++){
				
				if(v[j].first==x+1&&v[j].second==y)
					flag1=1;
				if(v[j].first==x-1&&v[j].second==y)
					flag2=1;
				if(v[j].first==x&&v[j].second==y+1)
					flag3=1;
				if(v[j].first==x&&v[j].second==y-1)
					flag4=1;
				
				
			}
			if(flag1==0)
				l++;
				if(flag2==0)
				l++;
				if(flag3==0)
				l++;
				if(flag4==0)
				l++;
			
	
		
	}
	cout<<l<<"\n";
}
	return 0;
}
