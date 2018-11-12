#include<iostream>
using namespace std;
int cost[10][10],i,j,k,n,stk[10],top=0,v,visit[10],visited[10];
int main()
{
	int m;
	cout<<"enter the vertices";
	cin>>n;
	cout<<"enter the edges";
	cin>>m;
	cout<<"\nedges";
	for(k=1;k<=m;k++)
	{
		cin>>i>>j;
		cost[i][j]=1;
	}
	cout<<"enter ini. vertices";
	cin>>v;
	cout<<"visited vertices";
	cout<<v<<" ";
	visited[v]=1;
	k=1;
	while(k<n)
	{
		for(j=1;j<=n;j++)
		{
			if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
			{
				visit[j]=1;
				stk[top]=j;
				top++;
			}
		}
		v=stk[--top];
		cout<<v<<" ";
		k++;
	}
}
