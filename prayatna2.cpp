#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0,i;
	cin>>n;
	int a[n],cnt[n];
	for(i=0;i<n;i++){
		cnt[i]=count(a,a+n,a[i]);
	}
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(count(a+i,a+n,-a[i])==0&&visited[i]){
			c=c+0;
		}
		if(count(a,a+n,a[i])==count(a+i,a+n,-(a[i]))){
			c+=count(a,a+n,a[i]);
		}

			if(count(a,a+n,a[i])!=count(a+i,a+n,-a[i])){
				c+=(count(a,a+n,a[i])*count(a+i,a+n,-a[i]));
			}
		
	}
	cout<<c<<"\n";
}
