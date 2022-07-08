/*Question
	1. You are given a number n and a number k in separate lines, representing the number of fences and number of colors.
2. You are required to calculate and print the number of ways in which the fences could be painted so that not more than two fences have same colors.

										 
										 
										 
Input Format
A number n
A number k
Output Format
A number representing the number of ways in which the fences could be painted so that not more than two fences have same colors.
Constraints
1 <= n <= 10
1 <= k <= 10
Sample Input
8
3
Sample Output
3672*/









#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int diff[n];
	int same[n];
	diff[0]=k;
	same[0]=0;
	int total[n];
	total[0]=k;
	for(int i=1;i<n;i++){
		same[i]=diff[(i-1)];
		diff[i]=(total[(i-1)])*(k-1);
		total[i]=same[i]+diff[i];
	}
	cout<<total[(n-1)];
}