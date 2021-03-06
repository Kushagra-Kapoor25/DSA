/*	Question
Given two numbers 'N' and 'S' , find the largest number that can be formed with 'N'
digits and whose sum of digits should be equals to 'S'.

Input:

The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow. The first line of each test case contains two space
separated integers N and S, where N is the number of digits and S is the sum.

Output:

Print the largest number that is possible.If their is no such number, then print -1.

Constraints:
1 <= T <= 30
1 <= N <= 50
0 <= S <= 500

Example:
Input:
2
2 9
3 20
Output:
90
992

Expected Time Complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;
int largestNumber(int n, int s)
{

}
int main()
{
	int  t;
	cin >> t;
	while (t--)
	{
		int n, s;
		cin >> n >> s;
		largestNumber(n, s);
	}
	return 0;
}