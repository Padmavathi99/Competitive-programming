#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,minpos,maxpos,min,max,j,k,count=0;
	
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		
	}
	min=*min_element(a,a+n);
	max=*max_element(a,a+n);
	for(i=0;i<n;i++){
		if(a[i]==max){
			maxpos=i;
			break;
		}
	}
	j=maxpos-1;
	
	
	if(a[0]==max&&a[n]==min)
		count=0;
	if(a[0]!=max){
		while(a[0]!=max){
			swap(a[j],a[maxpos]);
			count++;
			maxpos=j;
			j--;
			
			
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==min){
			minpos=i;
		}
	}
	
	k=minpos+1;
	if(a[n-1]!=min){
		while(a[n-1]!=min){
			swap(a[k],a[minpos]);
			count++;
			minpos=k;
			k++;
			
		}
	}
	
	cout<<count;
	return 0;
}
