 #include <bits/stdc++.h> 
using namespace std; 
#define UNASSIGNED 0 
#define N 9
bool UnassignedLocation(int grid[N][N], int &row, int &col); 
bool isSafe(int grid[N][N], int row, int col, int num); 
bool SolveSudoku(int grid[N][N]) 
{ 
	int row, col; 
	if (!UnassignedLocation(grid, row, col)) 
	return true; 
	for (int num = 1; num <= 9; num++) 
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


bool UnassignedLocation(int grid[N][N], 
							int &row, int &col) 
{ 
	for (row = 0; row < N; row++) 
		for (col = 0; col < N; col++) 
			if (grid[row][col] == UNASSIGNED) 
				return true; 
	return false; 
} 


bool UsedRow(int grid[N][N], int row, int num) 
{ 
	for (int col = 0; col < N; col++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 


bool UsedCol(int grid[N][N], int col, int num) 
{ 
	for (int row = 0; row < N; row++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 



bool UsedBox(int grid[N][N], int boxStartRow, 
			int boxStartCol, int num) 

{ 
	for (int row = 0; row < 3; row++) 
		for (int col = 0; col < 3; col++) 
					if(grid[row+boxStartRow][col + boxStartCol] == num) 
				return true; 
	return false; 
} 

bool isSafe(int grid[N][N], int row, 
				int col, int num) 
{ 
	
	return !UsedRow(grid, row, num) && 
		!UsedCol(grid, col, num) && 
		!UsedBox(grid, row - row % 3 , col - col % 3, num) && grid[row][col] == UNASSIGNED; 
} 


void printGrid(int grid[N][N]) 
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

	int grid[N][N];
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
		grid[i][j]=0;
	if (SolveSudoku(grid) == true) 
		printGrid(grid); 
	else
		cout << "No solution exists"; 

	return 0; 
} 


