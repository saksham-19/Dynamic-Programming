/*Question
	1. You are given a number n, representing the count of items.
2. You are given n numbers, representing the values of n items.
3. You are given n numbers, representing the weights of n items.
3. You are given a number "cap", which is the capacity of a bag you've.
4. You are required to calculate and print the maximum value that can be created in the bag without overflowing it's capacity.
Note1 -> Each item can be taken any number of times. You are allowed to put the same item again and again.

										 
										 
										 
Input Format
A number n
v1 v2 .. n number of elements
w1 w2 .. n number of elements
A number cap
Output Format
A number representing the maximum value that can be created in the bag without overflowing it's capacity
Constraints
1 <= n <= 20
0 <= v1, v2, .. n elements <= 50
0 < w1, w2, .. n elements <= 10
0 < cap <= 10
Sample Input
5
15 14 10 45 30
2 5 1 3 4
7
Sample Output
100*/






#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int val[n];
	int w[n];
	int weight;
	for(int i=0;i<n;i++){
		cin>>val[i];
	}
	for(int i=0;i<n;i++){
			cin>>w[i];
		}
		cin>>weight;
		int c=0;
		
		int dp[(n+1)][(weight+1)];
	for(int i=0;i<=n;i++){
		for(int s=0;s<=weight;s++){
			if(i==0 || s==0)
			dp[i][s]=0;
			else if(w[(i-1)]<=s){
				dp[i][s]=max((val[(i-1)]+dp[i][(s-w[(i-1)])]),dp[(i-1)][s]);
			}
			else
			dp[i][s]=dp[(i-1)][s];
		}
	}
	cout<<dp[n][weight];
}