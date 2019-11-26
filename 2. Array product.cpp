/*

This problem was asked by Uber.
Given an array of integers, return a new array such that each element at index i of the new array 
is the product of all the numbers in the original array except the one at i.

For example, 
if our input was [1, 2, 3, 4, 5], 
the expected output would be [120, 60, 40, 30, 24].

If our input was [3, 2, 1], 
the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	cout<<"Enter N: ";
	cin>>n;
	long arr[n],left[n],right[n];
	cout<<"Enter "<<n<<" elements: \n";
	for(long i=0;i<n;i++){
		cin>>arr[i];
	}
	left[0] = 1;
	right[n-1]=1;
	for(long i =1;i<n;i++){
		left[i] = left[i-1]*arr[i-1];
	}
	for(long i = n-2;i>=0;i--){
		right[i] = right[i+1]*arr[i+1];
	}
	long sol[n];
	for(long i=0;i<n;i++){
		sol[i] = left[i]*right[i];
		cout<<sol[i]<<" ";
	}
	return 0;
}
