/*	1. You are given a number n.
2. You are required to print the number of binary strings of length n with no consecutive 0's.*/


#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[(n+3)];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<(n+3);i++){
		arr[i]=arr[(i-1)]+arr[(i-2)];
		//cout<<arr[i];
	}
	cout<<arr[(n+2)];
}