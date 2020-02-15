#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    int s1,s2,d1,d2,steps=0,x,y,flag=0;
	    int v[n+1][m+1];
	    int dx[]={-2,-2,+2,+2,-1,-1,+1,+1};
	    int dy[]={-1,+1,-1,+1,-2,+2,-2,+2};
	    
	    queue<pair<int,int>> q;
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            v[i][j]=0;
	        }
	    }
	    cin>>s1>>s2>>d1>>d2;
	    q.push({s1,s2});
	    v[s1][s2]=1;
	    while(!q.empty())
	    {
	        int s=q.size();
	        while(s>0)
	        {
	            pair<int,int> p=q.front();
	            q.pop();
	            if(p.first==d1&&p.second==d2)
	            {
	                flag=1;
	                break;
	            }
	            for(int i=0;i<8;i++)
	            {
	                x=p.first+dx[i];
	                y=p.second+dy[i];
	               // cout<<x<<" "<<y<<endl;
	                
	                if((x>=1&&x<=n)&&(y>=1&&y<=m)&&!v[x][y])
	                {
	                   // cout<<"hey";
	                    v[x][y]=1;
	                    //cout<<x<<" "<<y<<endl;
	                    q.push({x,y});
	                    //cout<<"hey";
	                }
	            }
	            s--;
	        }
	        steps++;
	        if(flag==1)
	            break;
	       
	    }
	    cout<<steps<<endl;
	    
	}
	return 0;
}