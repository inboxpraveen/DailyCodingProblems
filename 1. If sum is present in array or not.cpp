/*

This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

*/
#include<bits/stdc++.h>
using namespace std;
bool checksum(long arr[],long n,long sum){
	// sum value 0 always exsists 
	if(sum==0){
		return true;
	}
	// sum not possible if no array elements
	if(n==0 && sum!=0){
		return false;
	}
	// otherwise recursively check if sum is there with or without elements...from last
	return checksum(arr,n-1,sum)||checksum(arr,n-1,sum-arr[n-1]); 
}
int main(){
	long n;
	cout<<"Enter N: ";
	cin>>n;
	long arr[n];
	cout<<"Enter "<<n<<" elements: "<<endl;
	for(long i=0;i<n;i++){
		cin>>arr[i];
	}
	long k;
	cout<<"Enter K:";
	cin>>k;
	if(checksum(arr,n,k)){
		cout<<"True";
	}else{
		cout<<"False";
	}
	return 0;
}
