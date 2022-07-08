/*Question
	Description
1. You are given a number n, representing the number of days.
2. You are given n numbers, where ith number represents price of stock on ith day.
3. You are required to print the maximum profit you can make if you are allowed a single transaction.

															 
															 
Input Format
A number n
.. n more elements
Output Format
A number representing the maximum profit you can make if you are allowed a single transaction.
Constraints
0 <= n <= 20
0 <= n1, n2, .. <= 10
Sample Input
9
11
6
7
19
4
1
6
18
4
Sample Output
17*/






#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=-0;i<n;i++){
		cin>>arr[i];
	}
	int diff[n];
	int srr[n];
	srr[1]=-1;
	if(arr[0]<=arr[1])
	diff[1]=arr[0];
	else
	diff[1]=10000000;
	for(int i=2;i<n;i++){
		diff[i]=min(diff[(i-1)],arr[(i-1)]);
		if(arr[i]<diff[i])
			diff[i]=10000000;
			srr[i]=srr[(i-1)];
		if(diff[i]!=10000000){
			srr[i]=max(srr[(i-1)],arr[i]-diff[i]);
		}
	}
	cout<<srr[(n-1)];
}