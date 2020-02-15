#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,count=0,i;
	cin>>a>>b;
	if(b==2)
		swap(a,b);
	if(b%2==0)
		count=-1;
	else
		count=floor(b/2);
	cout<<count;
}
