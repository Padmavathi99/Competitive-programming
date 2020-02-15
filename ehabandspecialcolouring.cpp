#include<bits/stdc++.h>
using namespace std;
int a[100009]={0};
int main(){
	int n,i,j,k;
	cin>>n;
	k=1;
	for(i=2;i<=n;i++){
		
		if(a[i]==0){
			
			//cout<<i<<endl;
			for(j=i;j<=n;j+=i){
				if(!a[j])
					a[j]=k;
			}
			k++;
	}
	//cout<<k<<endl;
	
}
	for(i=2;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}
