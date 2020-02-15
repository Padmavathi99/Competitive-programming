#include<bits/stdc++.h>
using namespace std;
void reverse(char *begin,char *end)
{
	char temp;
	while(begin<end)
	{
		temp=*begin;
		*begin++=*end;
		*end--=temp;
	}
	

}
void revword(char *c)
{
	char *wordbegin,*temp;
	wordbegin=temp=c;
	while(*temp)
	{
		temp++;
		if(*temp=='\0')
		{
			reverse(wordbegin,temp-1);
		}
		if(*temp==' ')
		{
			reverse(wordbegin,temp-1);
			wordbegin=temp+1;
		}
		

	}
	reverse(c,temp-1);
}
int main()
{
	
	char s[]={"hello how are you"};
	
	revword(s);
	printf("%s",s);
	
	return 0;

}