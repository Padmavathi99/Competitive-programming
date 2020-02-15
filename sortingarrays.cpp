#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<iomanip>
int a[100000];
using namespace std;
int main(){
	int n;
	cin>>n;
	int len=0,l,s,i1,i2,i=0,j=0,k=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	if(is_sorted(a,a+n)){
		cout<<"yes\n"<<"1 1";
		return 0;
	}
	else{
		if(a[0]>a[1]){
			s=l=0;
			while(a[j]>a[j+1]&&j+1<n){
			    l++;
				j++;
				
			}
			
			reverse(a,a+l+1);
			
			
			if(is_sorted(a,a+n)){
				i1=s+1;
				i2=l+1;
			}
			else{
				cout<<"no";
				return 0;
			}
		}
		else{
		    
		    while(a[k]<a[k+1]){
		        k++;
			}
			
			s=k;
			l=k;
			while(a[k]>a[k+1]&&k+1<n){
				l++;
				k++;
				
			}
			reverse(a+s,a+l+1);
			if(is_sorted(a,a+n)){
				i1=s+1;
				i2=l+1;
			}
			else{
				cout<<"no";
				return 0;
			}
		}
	}
	cout<<"yes\n"<<i1<<" "<<i2;
	return 0;
}
