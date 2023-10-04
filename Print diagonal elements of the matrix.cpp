// Given an M x N matrix, print all it's diagonal elements having a positive slope.


// Input format

// Two integers M and N denoting number of rows and columns in the matrix.

// M * N elements of matrix.


// Output format

// Diagonal print


// Example 1

// Input

// 5 5
// 1 2 3 4 5
// 2 3 4 5 6
// 3 4 5 6 7
// 4 5 6 7 8
// 5 6 7 8 9


// Output

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6
// 7 7 7
// 8 8
// 9


// Explanation

// None.


// Constraints

// None

#include <iostream>
using namespace std;
int main() {
    int m , n ;
    cin>>m>>n ;
    int arr[m][n] ;
    for(int i=0 ;i<m ;i++) {
        for(int j=0 ;j<n ;j++) {
            cin>>arr[i][j] ;
        }
    }
    for(int k=0 ;k<m+n-1 ;k++) {
        int i , j;
        if(k<m) {
            i=k ;
            j=0 ;
        } else {
            i=m-1 ;
            j=k-(m-1) ;
        }
        while(i>=0 &&j<n) {
            cout<<arr[i][j]<<" " ;
            i-- ;
            j++ ;
        } cout << endl ;
    
    }
    return 0 ;
}
