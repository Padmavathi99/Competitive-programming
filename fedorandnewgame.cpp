#include<iostream>
using namespace std;
int main(){
	int n,m,k,i,f,count=0,fnd=0;
	cin>>n>>m>>k;
	int a[m+1];
	for(i=0;i<m+1;i++){
		cin>>a[i];
	}
	f=a[m];
	i=0;
	while(i<m){
		count=0;
		f=a[m];
		while(a[i]>0){
			if(f>0){
			if(a[i]%2!=f%2){
				count++;
			}
			a[i]=a[i]/2;
			f=f/2;
		}
			else{
				if(a[i]%2!=0){
					count++;
					
				}
				a[i]=a[i]/2;
			}
		}
		if(a[i]<=0&&f>0){
			while(f>0){
				if(f%2!=0){
					count++;
				}
				f=f/2;
			}
		}
		
		i++;
		
		if(count<=k){
			fnd++;
			
		}
			
	}
	cout<<fnd;
	return 0;
}
