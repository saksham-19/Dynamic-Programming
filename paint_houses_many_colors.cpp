/*Question
	1. You are given a number n and a number k separated by a space, representing the number of houses and number of colors.
2. In the next n rows, you are given k space separated numbers representing the cost of painting nth house with one of the k colors.
3. You are required to calculate and print the minimum cost of painting all houses without painting any consecutive house with same color.

							   
							   
							   
							   
Input Format
A number n
n1-0th n1-1st n1-2nd .. n1-kth
n2-0th n2-1st n2-2nd .. n2-kth
.. n number of elements
Output Format
A number representing the minimum cost of painting all houses without painting any consecutive house with same color.
Constraints
1 <= n <= 1000
1 <= k <= 10
0 <= n1-0th, n1-1st, .. <= 1000
Sample Input
4 3
1 5 7
5 8 4
3 2 9
1 2 4
Sample Output
8*/





#include<iostream>
using namespace std;
int minimum(int trr[],int y,int m){
	int res=1000000000;
	for(int i=0;i<m;i++){
		if(trr[i]<=res && i!=y){
			res=trr[i];
		}
	}
	return res;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			arr[i][j]+=minimum(arr[(i-1)],j,m);
		}
	}
	cout<<minimum(arr[(n-1)],-1,m);
}