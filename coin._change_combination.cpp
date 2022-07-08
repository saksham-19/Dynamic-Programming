/*Question
	1. You are given a number n, representing the count of coins.
2. You are given n numbers, representing the denominations of n coins.
3. You are given a number "amt".
4. You are required to calculate and print the number of combinations of the n coins using which the amount "amt" can be paid.
Note1 -> You have an infinite supply of each coin denomination i.e. same coin denomination can be used for many installments in payment of "amt"
Note2 -> You are required to find the count of combinations and not permutations i.e.
2 + 2 + 3 = 7 and 2 + 3 + 2 = 7 and 3 + 2 + 2 = 7 are different permutations of same combination. You should treat them as 1 and not 3.

							   
							   
							   
							   
Input Format
A number n
n1
n2
.. n number of elements
A number amt
Output Format
A number representing the count of combinations of coins which can be used to pay the amount "amt"
Constraints
1 <= n <= 30
0 <= n1, n2, .. n elements <= 20
0 <= amt <= 50
Sample Input
4
2
3
5
6
7
Sample Output
2*/





#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int func(int arr[], int n, int m){
	int temp[n+1][m+1];
	for(int i=0; i<(n+1); i++){
		temp[i][0] = 1;
	}
	for(int i=1; i<(m+1); i++){
		temp[0][i] = 0;
	}
	for(int i=1; i<n+1; i++){
		for(int j=1; j<m+1; j++){
				temp[i][j] = temp[i-1][j];
			if(j>=arr[(i-1)])
				temp[i][j] = temp[i][j] + temp[i][j-arr[i-1]];
			//	cout<<temp[i][j]<<" ";
		}
	//	cout<<endl;
	}
	return temp[n][m];
}

int main(){
	int m, n;
	cin>>m;
	int arr[m];
	for(int i=0; i<m; i++){
		cin>>arr[i];
	}
	//sort(arr, arr + m);
	cin>>n;
	int x = func(arr, m, n);
	cout<<x;
	return 0;
}