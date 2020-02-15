#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int n,m,min=0,max=0,tot=0,temp,num,x;
	long long int mem,rem;
	cin>>n>>m;
	temp=m;
	mem=n/m;
	rem=n%m;
	x=rem;
	if(m==1){
		min=max=(n-1)*n/2;
		cout<<min<<" "<<max;
		return 0;
	}
	while(tot!=n){
		if(x!=0){
			min+=(mem+1)*mem/2;
			x--;
			tot+=mem+1;
		}
		else{
			min+=(mem-1)*mem/2;
			tot+=mem;
		}
		
	}
	
	num=n-temp+1;
	max=(num-1)*num/2;
	
	cout<<min<<" "<<max;
	return 0;
}
