/*
0-1 Knapsack */


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
				dp[i][s]=max((val[(i-1)]+dp[(i-1)][(s-w[(i-1)])]),dp[(i-1)][s]);
			}
			else
			dp[i][s]=dp[(i-1)][s];
		}
	}
	cout<<dp[n][weight];
}