#include<iostream>
using namespace std;
int main(){
	int n,k,t,c=0;
	cin>>n>>k;
	while(n>0){
		cin>>t;
		if(t%k==0){
			c++;
		}
		n--;
	}
	cout<<c;
	return 0;
}
