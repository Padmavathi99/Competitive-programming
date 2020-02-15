#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int r,a,b,x,y,count;
	long double dis;
	cin>>r>>a>>b>>x>>y;
	dis=sqrt(pow(x-a,2)+pow(y-b,2));
	
	dis=ceil(dis/2);
	count=ceil(dis/r);
		cout<<count;
	return 0;
}
