#include<iostream>
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    
    for (i = 0; i < n; i++)  
    {  
          
        min_idx = i;  
        for (j = i; j <= n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
	swap(&arr[min_idx], &arr[i]);  
    }  
}  
  

  

int main()  
{  
   int n;
	cout<<"enter the size of array";
	cin>>n;
	int a[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter the value of k";
	int k;
	cin>>k;
    selectionSort(a, k);
	
	cout<<endl<<k<<"th samllest element is :"<<a[k-1]<<endl;
    
    return 0;  
}  
