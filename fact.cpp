#include<iostream>
using namespace std;
int main(){
	int n,fact[100],t[100],i=0,j=0;
	cin>>n;
	while(n>0){
	
		cin>>t[i];
		
		if(t[i]==0||t[i]==1){
			fact[i]=1;
			
		}
		fact[i]=1;
		while(t[i]>0){
			fact[i]=fact[i]*t[i];
			t[i]--;
		}
		
		n--;
		i++;
		
	}
	i=0;
	
	return 0;
}
