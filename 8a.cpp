#include<iostream>
using namespace std;
bool isHeap(int arr[], int i, int n) 
{ 
if (i > (n - 2)/2) 
	return true; 
if (arr[i] >= arr[2*i + 1] && arr[i] >= arr[2*i + 2] && 
	isHeap(arr, 2*i + 1, n) && isHeap(arr, 2*i + 2, n)) 
	return true; 

return false; 
} 

int main() 
{  
	int n;
	cout<<"enter the size of array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements: "<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	isHeap(arr, 0, n)? printf("Yes"): printf("No"); 
	cout<<endl;
	return 0; 
}
/* 
enter the size of array: 
5
enter the elements: 
90
5
6
2
3
Yes
Press ENTER to continue...
*/


