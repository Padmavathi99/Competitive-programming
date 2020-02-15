#include<iostream>
using namespace std;
int h[100000];
int main(){
	int n,i,t=0,d=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>h[i];
	}
	t+=h[0]+1;
	for(i=1;i<n;i++){
		if(h[i-1]<=h[i]){
			t+=2+h[i]-h[i-1];
		}
		else{
			t+=h[i-1]-h[i]+2;
		}
		
	}
	cout<<t;
	return 0;
}
