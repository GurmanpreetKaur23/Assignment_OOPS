// Kartik bhaiya creates a play list  having N songs. You have to given duration of ith song as Ti minutes. Kartik bhaiya listens to song number i, Ki times.His play list is organized as follows: first song number 1 plays K1 times, then song number 2 plays K2 times, ..., in the end the song number N plays KN times.
// Kartik bhaiya randomly selects M moments and for each such moment, he wants to know the song number that will be playing at that moment.

// Help Kartik bhaiya and calculate the required song number.

// Input format
// First line contains two integers N, M.

// Next N lines contain pairs of integers. The i-th line has integers Ki, Ti — the description of the play list. 

// Next line contains M positive integers V1, V2, ..., VM, that describe the moments. It is guaranteed that there isn't such moment of time Vi, when the music doesn't play any longer.

// Output format
// Print M integers -> the ith number must be equal to the song number that was playing at the Vith moment after Kartik bhaiya started listening to the play list.

// Example 1
// Input
// 4 9
// 1 2
// 2 1
// 1 1
// 2 2
// 1 2 3 4 5 6 7 8 9


// Output
// 1
// 1
// 2
// 2
// 3
// 4
// 4
// 4
// 4


// Explanation
// None

// Constraints

// 1<=N,M<=10^5

// 1<=Ki,Ti<=10^9

// Vi<V(i+1)


#include<iostream>
using namespace std ;
int main() {
    int n , m ;
    cin>>n>>m; 
    int k[100001] , t[10001] ;
    int curr[n] ;
    int total = 0 ;
    for(int i=0 ; i< n ; i++) {
        cin>>k[i]>>t[i] ;
        total += k[i] * t[i] ;
        curr[i] = total ;
    }
    int v[100001] ;
    for(int i=0 ;i <m ; i++) {
        cin>>v[i] ;
    }
    int j = 0 ;
    for(int i=0 ; i<m && j<n;) {
            if(v[i]<=curr[j]) {
                cout<<j+1<<endl ;
                i++ ;
            } else {
                j++ ;
            }
    }
}
