/*Question
	1. You are given a number n, representing the count of elements.
2. You are given n numbers, representing n elements.
3. You are required to find the maximum sum of a subsequence with no adjacent elements.

							   
							   
							   
							   
Input Format
A number n
n1
n2
.. n number of elements
Output Format
A number representing the maximum sum of a subsequence with no adjacent elements.
Constraints
1 <= n <= 1000
-1000 <= n1, n2, .. n elements <= 1000
Sample Input
6
5
10
10
100
5
6
Sample Output
116*/



#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum[n];
	sum[0]=arr[0];
	if(arr[1]>arr[0])
	sum[1]=arr[1];
	else 
	sum[1]=arr[0];
	for(int i=2;i<n;i++){
		sum[i]=max(sum[(i-1)],max((sum[(i-2)]+arr[i]),arr[i]));
	}
	cout<<sum[(n-1)];
}