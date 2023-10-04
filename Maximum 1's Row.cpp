// You are given a matrix with boolean values of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.


// Input format

// First line of input contains n and m
// Second line of input contains elements of matrix


// Output format

// Print index of row with maximum 1


// Example 1

// Input

// 4 5
// 0 0 0 0 0
// 0 0 0 0 1
// 1 1 1 1 1
// 0 1 1 1 1


// Output

// 2


// Explanation

// Row with maximum one's is 2nd (indexing with 0).


// Constraints

// 1 ≤ N, M ≤ 103 

// 0 ≤ Arr[i][j] ≤ 1


#include<iostream>
using namespace std ;
int main () {
	int n , m ;
	cin >>n >>m ;
	int mat[n][m] ;
	int maxi = -2 ;
	int ans ;
	for(int i=0 ; i<n ; i++){
		int c=0 ;
		for(int j=0 ; j<m ; j++){
			cin>>mat[i][j] ;
			if(mat[i][j]==1) {
				c++ ;
			}
		}
		if(c>maxi) {
			maxi = c ;
			ans = i ;
		}
	}
	cout<<ans ;
	return 0;
}
