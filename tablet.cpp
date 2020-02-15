#include<iostream>
using namespace std;
int main(){
	int t,n,b,l,w,i;
	cin>>t;
	while(t--){
		cin>>n>>b;
		int l[n],w[n],p[n];
		int max=0;
		for(i=0;i<n;i++){
			cin>>l[i]>>w[i]>>p[i];
			if(l[i]*w[i]>max&&p[i]<=b){
				max=l[i]*w[i];
			}
			
		}
		if(max==0){
			cout<<"no tablet";
		}
		else{
			cout<<"\n"<<max;
		}
		
		
		
	}
}
