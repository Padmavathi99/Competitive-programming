#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,even=0,odd=0,minsum=0,x,i,j;
	int del;
	cin>>n;
	vector<int> o,e;
	for(i=0;i<n;i++){
		cin>>x;
		if(x%2==0){
			even++;
			e.push_back(x);
		}
		else{
			odd++;
			o.push_back(x);
		}
	}
	sort(o.begin(),o.end());
	sort(e.begin(),e.end());
	if(odd==even||abs(odd-even)==1){
		minsum=0;
		cout<<minsum;
		return 0;
	}
	if(odd>even){
		i=odd-even-1;
		for(j=0;j<i;j++){
			minsum+=o[j];
		}
	}
	else{
		i=even-odd-1;
		for(j=0;j<i;j++){
			minsum+=e[j];
		}
	}
	cout<<minsum;
	return 0;
}
