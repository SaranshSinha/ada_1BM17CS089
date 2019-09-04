#include<iostream>
using namespace std;
void dfs(int v, int **a,bool vis[],int n)
{
	cout<<v;
	vis[v]=true;
	for(int i=0;i<n;i++)
	{
		if(a[v][i]==1&&vis[i]==false)
			dfs(i,a,vis,n);
	}
}

int main()
{
	int n;
	cout<<"enter the number of nodes: ";
	cin>>n;
	int **a;
	a=new int *[n];
	for(int i=0;i<n;i++)
		a[i]=new int[n];
	bool vis[n];
	cout<<"enter the adjacency matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"vertex "<<i<<endl;
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<n;i++)
		vis[i]=false;
	for(int i=0;i<n;i++)
		{
			if(vis[i]==false)
			dfs(i,a,vis,n);
			cout<<endl;
		}
	
}
