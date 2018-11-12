#include<iostream>
using namespace std;
int cost[20][20],i,j,k,n,qu[10],front=0,rear=0,v,visit[10],visited[10];
int main()
{
	int m,n,k,j;
	cout<<"enter the number of vertices";
	cin>>m;
    cout<<"enter the number of edges";
	cin>>n;
	cout<<"\edges";
	for(k=1;k<=n;k++)
	{
		cin>>i>>j;
		cost[i][j]=1;
		
    }	
    cout<<"enter the ini. vertex";
    cin>>v;
    cout<<"visited vertex";
    cout<<v;
    visited[v]=1;
    k=1;
    while(k<n)
    {
    	for(j=1;j<=n;j++)
    	{
    		if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
    		{
    			visit[j]=1;
    			qu[rear++]=j;
			}
		}
		v=qu[front++];
		cout<<v<<" ";
		k++;
	}
	
}
