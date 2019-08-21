#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
		{cin>>a[i];}
		int k;
		cout<<"enter the value of k: "<<endl;
			cin>>k;
		
		for(int i=0;i<k;i++)
			{
				for(int j=0;j<n-1;j++)
			
			{
				if(a[j]>a[j+1])
				{
					int temp;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
			}
		
			
			
			int c=n-k;
			while(c<n)
				cout<<a[c++]<<" ";
			
	return 0;
}
