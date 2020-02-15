#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,ne,se,i,sum,fin;
		cin>>n;
		sum=n*(n+1)/2;
		ne=n/2;
		se=ne*(ne+1);
		fin=sum-(2*se);
		cout<<fin<<"\n";
		
	}
	
}
