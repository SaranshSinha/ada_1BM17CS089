#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int n;
void bfs(int k,int **a,int vis[])
{
	cout<<k<<" ";
	vis[k]=1;
	q.push(k);
	while(!q.empty())
	{
		int w=q.front();
		q.pop();
		for(int i=0;i<n;i++)
		{
			if(a[w][i]&&!vis[i])
			{
				q.push(i);
				vis[i]=1;
				cout<<i<<" ";
			}
		}
	}
}
int main()
{
	cout<<"enter the number of vertices"<<endl;
	cin>>n;
	int **a=new int*[n];
	for(int i=0;i<n;i++)
		a[i]=new int[n];
	int k;
	cout<<"\nenter the matrix:"<<endl;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int vis[n];
	for(int i=0;i<n;i++)
		vis[i]=0;
	cout<<"enter source vertex:"<<endl;
	cin>>k;
	bfs(k,a,vis);
	return 0;
}
