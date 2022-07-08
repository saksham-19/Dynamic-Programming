/*
Question
1. You are given a number n, representing the number of upstrokes / and number of downstrokes \.
2. You are required to find the number of valleys and mountains you can create using strokes.
e.g.
for 1, answer is 1 -> /\

for 2, answer is 2 ->
			 /\
 /\/\, /  \

for 3, asnwer is 5 -> 
														 /\
					/\    /\       /\/\    /  \
/\/\/\, /\/  \, /  \/\, /     \, /    \

Note -> At no point should we go below the sea-level. (number of downstrokes should never be more than number of upstrokes)
Input Format
A number n
Output Format
A number representing the number of valleys and mountains you can create using strokes.
Constraints
0 <= n <= 15
Sample Input
4
Sample Output
14
*/


#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int catalan[(n+1)];
	catalan[0]=1;
	catalan[1]=1;
	for(int i=2;i<=n;i++){
		catalan[i]=0;
		for(int j=0;j<i;j++){
			catalan[i]=catalan[i]+(catalan[j]*catalan[(i-j-1)]);
		}
	}
	cout<<catalan[n];
}