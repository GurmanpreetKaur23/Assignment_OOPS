// You're given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space.
// If so, return the integer. If not, return -1.


// Input format

// First line of input contains size of array arr N.
// Second line of input contains elements of array.


// Output format

// Return element


// Example 1

// Input

// 7
// 6 3 5 6 4 6 2


// Output

// 6


// Explanation

// 6 appears more than n/3 (i.e. 2) times.


// Constraints

// 1 <= n <= 105

#include <iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

void bruteForce(int arr[] , int n) {
    sort(arr,arr+n) ;
    int c=1 ;
    int ans = -1 ;
    int i ; 
    for(i=1 ;i<n ;i++) {
        if(arr[i]==arr[i-1]) {
            c++ ;
        } else {
            if(c==n/3) {
                ans = arr[i] ;
                break ;
            } else {
                c=1 ;
            }
        }
    }
if(c==n/3) {
        ans =arr[n-1] ;
}
cout<<ans; 
}

void usingExtraSpace(int arr[],int n) {
    int ans = -1 ; 
    unordered_map<int ,int>mp ;
    for(int i=0 ; i<n ; i++) {
        mp[arr[i]]++ ;
        if(mp[arr[i]]==n/3) {
            ans = arr[i] ;
            break ;
        }
    }
    cout<<ans ;
}
void OptimisedSolution(int arr[],int n) {
    int i=0 , j=1 ;
    int c = 1 ;
    int ans = -1 ; 

    while(i<n &&j<n) {
        if(arr[i]==arr[j]) {
            c++ ;
            if(c==n/3) {
                ans= arr[i] ;
                break ;
            }
        }
        if(j==n-1) {
            c=1 ;
            i++ ;
            j=i+1 ;
        } else j++ ;
    }
    if(c==n/3) {
        ans = arr[i] ;
    }
    cout<<ans ; 
}
int main() {
    int n ;
    cin>> n ;
    int arr[n] ;
    int ans = -1 ;
    for(int i=0 ; i<n ; i++) {
        cin>>arr[i] ;
    }

    OptimisedSolution(arr,n) ;
    return 0 ;
}
