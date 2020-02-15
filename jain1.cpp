#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,t;
	cin>>t;
	while(t--){
		long long int i,j,count=0;
		cin>>n;
		string a[n],x;
		for(i=0;i<n;i++){
			cin>>a[i];
			
	}
		i=0;
		j=i+1;
		while(i<n-1&&j<n){
			x=a[i]+a[j];
			
		if(x.find_first_of("aeiou")!=-1){
				count++;
			}
			j++;
			if(j==n){
				i++;
				j=i+1;
			}
		}
		cout<<count<<"\n";
	}

	
	return 0;
}
