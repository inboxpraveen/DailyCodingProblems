//Given an array of integers, find the first missing positive integer in linear time and constant space.
//In other words, find the lowest positive integer that does not exist in the array. 
//The array can contain duplicates and negative numbers as well.
//For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int count_n = 0;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]<0){
			count_n++; //count of negative numbers
		}
	}

	sort(arr,arr+n);
	bool flag=false;

	for(int i= count_n;i<n-1;i++){
		if(arr[i+1]-arr[i]>1){
			cout<<arr[i]+1;
			flag=true;
			break;
		}
	}
	if(!flag){
		cout<<arr[n-1]+1;
	}
	
	return 0;
}
