/*Question
	1. You are given a number n, representing the number of friends.
2. Each friend can stay single or pair up with any of it's friends.
3. You are required to print the number of ways in which these friends can stay single or pair up.
E.g.
1 person can stay single or pair up in 1 way.
2 people can stay singles or pair up in 2 ways. 12 => 1-2, 12
3 people (123) can stay singles or pair up in 4 ways. 123 => 1-2-3, 12-3, 13-2, 23-1

							   
							   
							   
							   
Input Format
A number n
Output Format
A number representing the number of ways in which n friends can stay single or pair up.
Constraints
0 <= n <= 20
Sample Input
4
Sample Output
10*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int single[(n+1)];
	int pair[(n+1)];
	int total[(n+1)];
	single[0]=0;
	pair[0]=0;
	total[0]=0;
	single[1]=1;
	pair[1]=0;
	total[1]=1;
	total[2]=2;
	for(int i=3;i<=n;i++){
		single[i]=total[(i-1)];
		pair[i]=(i-1)*total[(i-2)];
		total[i]=single[i]+pair[i];
	}
	cout<<total[n];
}