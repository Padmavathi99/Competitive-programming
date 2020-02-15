#include<bits/stdc++.h>
using namespace std;
int lcs(string p,string q)
{
    int x=p.length();
    int y=q.length();
    int dp[x+1][y+1];
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            
            if(i==0||j==0)
            {
                dp[i][j]=0;
            }
            else if(p[i-1]==q[j-1])    
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[x][y];
    
}
int main()
{
    string p,q;
    cin>>p>>q;
    cout<<lcs(p,q);
    return 0;
}