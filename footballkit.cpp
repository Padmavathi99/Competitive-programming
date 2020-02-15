#include<iostream>
using namespace std;
long long int c[100000]={0};
int main(){
	long long int n,i;
	cin>>n;
	int hc[n],ac[n],h[n],a[n];
	for(i=0;i<n;i++){
		cin>>hc[i]>>ac[i];
		c[hc[i]]++;
	}
	for(i=0;i<n;i++){
		h[i]=n-1+c[ac[i]];
		a[i]=n-1-c[ac[i]];
		
	}
	for(i=0;i<n;i++){
		cout<<h[i]<<" "<<a[i]<<"\n";
		
	}
	return 0;
	
}
