// Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.


// Input format

// First line contains two integers m and n denoting the dimensions of the matrix
// Next m lines contains n integers each.


// Output format

// Print the modified matrix


// Example 1

// Input

// 2 2
// 1 0
// 0 0


// Output

// 1 1
// 1 0


// Explanation


// Constraints

// 1 <= m*n <= 106

#include <iostream>
using namespace std;
int main() {
    int m , n  ;
    cin>>m>>n ;
    int mat[m][n] ;

    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            cin>>mat[i][j] ;
        }
    }
    int row[m] = {0} ;
    int col[n] = {0} ;

    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            if(mat[i][j]==1) {
                row[i] = 1; 
                col[j] = 1 ;
            }
        }
    }
    int ans[m][n] = {{0}} ;
    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            if(row[i]==1 || col[j]==1) {
                ans[i][j] = 1 ;
            }
        }
    }
    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            cout<<ans[i][j]<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;
}
