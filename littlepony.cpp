#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int n,i,t=0,pos,count=0,flag=0,a;
	vector<int> v;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	if(is_sorted(v.begin(),v.end())){
	    
	    cout<<0;
	    return 0;
	}
	if(v[0]>v[1]&&n==2){
	    cout<<1;
	    return 0;
	}
	
		for(i=0;i<n-1;i++){
			if(v[i]>v[i+1]&&v[i+1]){
			    pos=i;
			    break;
			   }
			}
		for(i=pos;i<n;i++){
			
			count++;
		}
		rotate(v.begin(),v.begin()+pos+1,v.end());
	        if(is_sorted(v.begin(),v.end()))
	            cout<<count-1;
	       else
	        cout<<-1;
	    
	    
	    return 0;
	}
	

