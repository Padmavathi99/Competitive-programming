#include<iostream>
using namespace std;
int b[100][100],a[100][100],c[100][100];
int main(){
	long long int m,n,i,j,k,l,flag=0;
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>b[i][j];
			a[i][j]=1;
			c[i][j]=0;
		}
	}
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(b[i][j]==0){
				for(k=0;k<n;k++){
					a[i][k]=0;
				}
				for(k=0;k<m;k++){
					a[k][j]=0;
				}
			}
			
		}
	}
	
			


for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		for(k=0;k<m;k++){
			if(a[k][j]==1){
				c[i][j]=1;
				
			}
		}
		for(k=0;k<n;k++){
			if(a[i][k]==1){
				c[i][j]=1;
				
			}
		}
		
	}
}
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(b[i][j]!=c[i][j]){
			cout<<"NO";
			return 0;
		}
	}
}
	cout<<"YES\n";
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		cout<<a[i][j]<<" ";
	}
	cout<<"\n";
}

	
	return 0;
}
