#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	string s1="ACTG";
	cin>>s;
	if(s.find(s1)!=-1){
		cout<<0;
		return 0;
	}
	return 0;
}
