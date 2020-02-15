#include<bits/stdc++.h>
using namespace std;
long long n,s[10000],d,i,mid,p;
void bin(long long l,long long r,long long x)
{
    mid=(l+r)/2;
    if(x<s[0])
    {
        cout<<0<<endl;
        return;
    }
    if(x>s[n-1])
    {
        cout<<n<<endl;
        return;
    }
    if(x<s[mid] && x>s[mid-1])
    {
        cout<<mid<<endl;
        return;
    }
    if(x==s[mid])
    {
        cout<<mid+1<<endl;
        return;
    }
    if(x<s[mid])
    {
        bin(l,mid-1,x);
    }
    else
    {
        bin(mid+1,r,x);
    }
}
int main()
{
   
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>s[i];
   }
   sort(s,s+n);
   cin>>d;
   for(i=0;i<d;i++)
   {
       cin>>p;
       bin(0,n,p);
   }
   
    return 0;
}
