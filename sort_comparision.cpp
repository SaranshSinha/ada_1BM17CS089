#include<iostream>
using namespace std;
int merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
   
    int L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
   int c=0;
    i = 0; 
    j = 0;
    k = l; 
    while (i < n1 && j < n2) 
    { c++;
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
			
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
			
        } 
        k++; 
    } 
  
    
    while (i < n1) 
		 { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
	return c;
} 
  

int mergeSort(int arr[], int l, int r) 
{ 
	int count1;
    if (l < r) 
    { 
       
        int m = l+(r-l)/2; 
  
        
         mergeSort(arr, l, m); 
         mergeSort(arr, m+1, r); 
       count1= merge(arr, l, m, r); 
    }
return count1;
} 
 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  

void bubbleSort(int arr[], int n)  
{  
    int i, j;  int count2=0;
    for (i = 0; i < n-1; i++)     
	{
    
    for (j = 0; j < n-i-1; j++) 
	{
		count2++; 
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);
			
	}
	}
	 
cout<<count2<<endl; 
}  
 
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx; int count3=0; 
  
     
    for (i = 0; i < n-1; i++)  
    {  
        
        min_idx = i;  
        for (j = i+1; j < n; j++) 
{count3++; 
        if (arr[j] < arr[min_idx])  
            {
				min_idx = j;
				
			}
  
          
        swap(&arr[min_idx], &arr[i]);  
    } 
	}
cout<<count3<<endl; 
}   
  int main()
{
	int n;
	cout<<"enter the size of array";
	cin>>n;
	int arr1[n],arr2[n],arr3[n];
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	cin>>arr1[i];
	for (int i=0;i<n;i++)
	arr2[i]=arr1[i];
	for (int i=0;i<n;i++)
	arr3[i]=arr1[i];
	cout<<"number of comparisions in selection sort: "<<endl;
	selectionSort(arr1,n);
	cout<<"number of comparisions in bubble sort: "<<endl;
	bubbleSort(arr2,n);
	cout<<"number of comparisions in merge sort: "<<mergeSort(arr3,0,n-1)<<endl;
}
