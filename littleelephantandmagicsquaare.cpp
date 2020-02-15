#include<iostream>
using namespace std;
int main(){
	long long int a[3][3],i,j,sum,s1,s2,s3;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>a[i][j];
		
	for(i=1;i<=100000;i++){
		if(a[1][0]+a[2][0]+i==a[0][1]+a[0][2]+i){
			a[0][0]=i;
			sum=a[0][0]+a[0][1]+a[0][2];
		a[1][1]=sum-(a[1][0]+a[1][2]);
		a[2][2]=sum-(a[2][0]+a[2][1]);
		s1=(a[1][1]+a[1][0]+a[1][2]);
		s2=(a[0][2]+a[1][1]+a[2][0]);
		s3=(a[0][0]+a[1][1]+a[2][2]);
		if(s1==s2&&s2==s3)
			break;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
