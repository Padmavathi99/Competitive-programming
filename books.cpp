#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,t,i,max=0,sum=0,j;
	
	cin>>n>>t;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	i=0;
	j=i;
	while(i<n&&j<=n){
		
		
		if(sum+a[j]<=t){
			sum+=a[j];
			j++;
		}
		else{
		
			if(j-i>max){
				max=j-i;
				
				
				
				
			}
			sum=0;
				i++;
				j=i;
			
		}
	}
	cout<<max;
	
	return 0;
}
