#include <bits/stdc++.h> 
using namespace std; 
#define UNASSIGNED 0 
int N=9;
bool UnassignedLocation(int **grid, int &row, int &col); 
bool isSafe(int **grid, int row, int col, int num); 
bool SolveSudoku(int **grid) 
{ 
	int row, col; 
	if (!UnassignedLocation(grid, row, col)) 
	return true; 
	for (int num = 1; num <= N; num++) 
	{ 
		
		if (isSafe(grid, row, col, num)) 
		{ 
			
			grid[row][col] = num; 

			
			if (SolveSudoku(grid)) 
				return true; 

			
			grid[row][col] = UNASSIGNED; 
		} 
	} 
	return false;  
} 


bool UnassignedLocation(int **grid, 
							int &row, int &col) 
{ 
	for (row = 0; row < N; row++) 
		for (col = 0; col < N; col++) 
			if (grid[row][col] == UNASSIGNED) 
				return true; 
	return false; 
} 


bool UsedRow(int **grid, int row, int num) 
{ 
	for (int col = 0; col < N; col++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 


bool UsedCol(int **grid, int col, int num) 
{ 
	for (int row = 0; row < N; row++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 



bool UsedBox(int **grid, int boxStartRow, 
			int boxStartCol, int num) 

{ 
	for (int row = 0; row < (int)sqrt(N); row++) 
		for (int col = 0; col < (int)sqrt(N); col++) 
					if(grid[row+boxStartRow][col + boxStartCol] == num) 
				return true; 
	return false; 
} 	

bool isSafe(int **grid, int row, 
				int col, int num) 
{ 
	
	return !UsedRow(grid, row, num) && 
		!UsedCol(grid, col, num) && 
		!UsedBox(grid, row - row %((int)sqrt(N)) , col - col %((int)(sqrt(N))), num) && grid[row][col] == UNASSIGNED; 
} 


void printGrid(int **grid) 
{ 
	for (int row = 0; row < N; row++) #include <bits/stdc++.h> 
using namespace std; 
#define UNASSIGNED 0 
int N=9;
bool UnassignedLocation(int **grid, int &row, int &col); 
bool isSafe(int **grid, int row, int col, int num); 
bool SolveSudoku(int **grid) 
{ 
	int row, col; 
	if (!UnassignedLocation(grid, row, col)) 
	return true; 
	for (int num = 1; num <= N; num++) 
	{ 
		
		if (isSafe(grid, row, col, num)) 
		{ 
			
			grid[row][col] = num; 

			
			if (SolveSudoku(grid)) 
				return true; 

			
			grid[row][col] = UNASSIGNED; 
		} 
	} 
	return false;  
} 


bool UnassignedLocation(int **grid, 
							int &row, int &col) 
{ 
	for (row = 0; row < N; row++) 
		for (col = 0; col < N; col++) 
			if (grid[row][col] == UNASSIGNED) 
				return true; 
	return false; 
} 


bool UsedRow(int **grid, int row, int num) 
{ 
	for (int col = 0; col < N; col++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 


bool UsedCol(int **grid, int col, int num) 
{ 
	for (int row = 0; row < N; row++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 



bool UsedBox(int **grid, int boxStartRow, 
			int boxStartCol, int num) 

{ 
	for (int row = 0; row < (int)sqrt(N); row++) 
		for (int col = 0; col < (int)sqrt(N); col++) 
					if(grid[row+boxStartRow][col + boxStartCol] == num) 
				return true; 
	return false; 
} 	

bool isSafe(int **grid, int row, 
				int col, int num) 
{ 
	
	return !UsedRow(grid, row, num) && 
		!UsedCol(grid, col, num) && 
		!UsedBox(grid, row - row %((int)sqrt(N)) , col - col %((int)(sqrt(N))), num) && grid[row][col] == UNASSIGNED; 
} 


void printGrid(int **grid) 
{ 
	for (int row = 0; row < N; row++) 
	{ 
	for (int col = 0; col < N; col++) 
			cout << grid[row][col] << " "; 
		cout << endl; 
	} 
} 

int main() 
{ 
	cout<<"enter the value of N";
	cin>>N;
	int **grid=new int*[N];
	for(int i=0;i<N;i++)
	grid[i]=new int[N];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			grid[i][j]=0;
	
		
	if (SolveSudoku(grid) == true) 
		printGrid(grid); 
	else
		cout << "No solution exists"; 

	return 0; 
} 
	{ 
	for (int col = 0; col < N; col++) 
			cout << grid[row][col] << " "; 
		cout << endl; 
	} 
} 

int main() 
{ 
	cout<<"enter the value of N";
	cin>>N;
	int **grid=new int*[N];
	for(int i=0;i<N;i++)
	grid[i]=new int[N];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			grid[i][j]=0;
	
		
	if (SolveSudoku(grid) == true) 
		printGrid(grid); 
	else
		cout << "No solution exists"; 

	return 0; 
} 
