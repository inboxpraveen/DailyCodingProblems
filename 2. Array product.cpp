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
