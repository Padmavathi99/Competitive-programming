#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6][6],i,j,r,c,m=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				r=i;
			    c=j;
				
			}
	}
}

	if(r!=3){
		if(r>3)
		    m+=r-3;
		else
		    m+=3-r;
		
		
	}
	if(c!=3){
		if(c>3)
		    m+=c-3;
		else
		    m+=3-c;
	}
	cout<<m;
	return 0;
}
