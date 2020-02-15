#include<iostream>/
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,a[n],i,j,m,x,c;
		cin>>n>>k;
		c=n*(n+1)/2;
		long long int s[c][n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		c=0;
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				x=0;
				for(m=i;m<=j;m++){
					s[c][x]=a[m];
					x++;
				}
				c++;
			}
		}
		for(i=0;i<c;i++){
			for(j=0;j<n;j++){
				cout<<s[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
}
