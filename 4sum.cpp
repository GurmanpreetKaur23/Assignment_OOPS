// Given an unsorted integer array, print all distinct four elements quadruplets in it, having a given sum.


// Input format

// First line of input contains integer n denoting the size of the array.
// Next line of the input contains n space separated integers denoting the elements of the array.
// Last line of the input contains integer k, denoting the given sum.


// Output format

// Print all distinct four elements quadruplets of given sum.


// Example 1

// Input

// 8
// 2 7 4 0 9 5 1 3
// 20


// Output

// 2 4 5 9
// 0 4 7 9
// 1 3 7 9


// Constraints

// 1<=n<=10^3

#include<iostream>
#include<algorithm>
#include<climits>
#define ll long long 
using namespace std ;
int main () {
	ll n ; 
	cin>>n ;
	ll arr[n]  ;
	for(int i=0; i<n ; i++) {
		cin>>arr[i] ;
	}
	ll k ;
	cin>>k ;
	sort(arr,arr+n) ;

	for(int i=0 ; i<n-3 ; i++) {
		if(i>0 && arr[i] == arr[i-1]) continue ; 
		for(int j=i+1 ; j<n-2 ; j++) {
			if(j!=i+1 &&arr[j]==arr[j-1]) continue ; 

			int low = j+1 , high = n-1 ;
			while(low<high) {
				ll sum = (ll)arr[i] + (ll)arr[j] + (ll)arr[low] + (ll)arr[high] ;
				if(sum==k) {
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[low] <<" "<<arr[high] <<endl ;
					int l = arr[low] , h=arr[high] ;
					low++ ;
					high-- ;

					while(l==arr[low]) low++ ;
					while(h==arr[high]) high++ ;
				} 
				else if(sum<k) {
					low++;
				}
					else {
						high-- ;
				}
			}
		}
	}
	return 0;
}
