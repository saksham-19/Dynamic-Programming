/*
Given a gold mine of n*m dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner is at first column but can be at any row. He can move only (right->,right up /,right down\) that is from a given cell, the miner can move to the cell diagonally up towards the right or right or diagonally down towards the right. Find out maximum amount of gold he can collect */



#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
		int n;
		int m;
		cin>>n>>m;
		int arr[100][100];
		for(int i=0;i<n;i++){
				for(int j=0;j<m;j++)
				cin>>arr[i][j];
		}
		int sum[n][m];
	for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			sum[i][j]=0;
			//cout<<sum[i][j];
	}
}
		for (int col=m-1; col>=0; col--) 
		{ 
			for (int row=0; row<n; row++) 
			{ 
				 
				int right = (col==m-1)? 0: sum[row][col+1]; 
	  
				 
				int right_up = (row==0 || col==m-1)? 0: 
								sum[row-1][col+1]; 
	  
				
				int right_down = (row==n-1 || col==m-1)? 0: 
								 sum[row+1][col+1]; 
				sum[row][col] = arr[row][col] + 
								  max(right, max(right_up, right_down)); 
														  
			} 
		}
		 int res = sum[0][0]; 
			for (int i=1; i<n; i++) 
				res = max(res, sum[i][0]); 
			cout<< res; 
}