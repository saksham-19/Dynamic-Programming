/*Question
	1. You are given a number n, representing the number of houses.
2. In the next n rows, you are given 3 space separated numbers representing the cost of painting nth house with red or blue or green color.
3. You are required to calculate and print the minimum cost of painting all houses without painting any consecutive house with same color.

										 
										 
										 
Input Format
A number n
n1red n1blue n1green
n2red n2blue n2green
.. n number of elements
Output Format
A number representing the minimum cost of painting all houses without painting any consecutive house with same color.
Constraints
1 <= n <= 1000
0 <= n1red, n1blue, .. <= 1000
Sample Input
4
1 5 7
5 8 4
3 2 9
1 2 4
Sample Output
8*/







#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n][3];
	pair<int,int> p;
	pair<int,int> bg[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<n;i++){
		arr[i][0]+=min(arr[(i-1)][1],arr[(i-1)][2]);
		arr[i][1]+=min(arr[(i-1)][0],arr[(i-1)][2]);
		arr[i][2]+=min(arr[(i-1)][0],arr[(i-1)][1]);
	}
	cout<<min(arr[(n-1)][0],min(arr[(n-1)][1],arr[(n-1)][2]));
}