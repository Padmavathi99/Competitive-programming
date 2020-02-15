#include<iostream>
#define m 1000000007
using namespace std;
int main(){
	long long int x,y,n,r;
	cin>>x>>y;
	cin>>n;
	long long int a[]={x-y,x,y,y-x,-x,-y};
	r=(a[n%6]%m+m)%m;
	cout<<r;
	return 0;
	
}
