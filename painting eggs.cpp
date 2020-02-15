#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000000],g[1000000],i,x=0,y=0;
	char s[1000000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i]>>g[i];
		
	}
	for(i=0;i<n;i++){
	    
		if(abs((x+a[i])-y)<=500){
			x+=a[i];
			s[i]='A';
		}
		else if(abs((y+g[i])-x)<=500){
			y+=g[i];
			s[i]='G';
		}
		else{
			cout<<-1;
			return 0;
		}
	}
	for(i=0;i<n;i++){
		cout<<s[i];
	};
	return 0;
}
