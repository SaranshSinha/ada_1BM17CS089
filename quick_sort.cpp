#include <bits/stdc++.h> 
using namespace std;  
  

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];   
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++)  
    {  
		
        if (arr[j] < pivot)  
        {  
            i++;   
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
       
        int pivot=partition(arr, low, high);  
  
         
        quickSort(arr, low, pivot - 1);  
        quickSort(arr, pivot + 1, high);  
    }  
}  
  

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
 
int main()  
{  
    
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the elements of the array:";
	for(int j=0;j<n;j++)
		cin>>arr[j];
	cout<<"input array:\n";
	printArray(arr,n);
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  

