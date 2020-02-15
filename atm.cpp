#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float bal;
	int amt;
	cin>>amt>>bal;
	if(amt%5==0&&bal>amt+0.50){
		bal=bal-(amt+0.50);
	}
	cout<<setprecision(2)<<fixed;
	cout<<bal;
	return 0;
}
