/* Question
The whitewalkers are here and the Great War is on. Each and every living being is
giving their best to save the world from the dead. Arya fighting with full
dedication found that whitewalkers need to be killed with a pattern or else they
won't die. So that she can fight till the end of the war. She tried to understand the
pattern. She kills every 'Xth' whitewalker by stabbing them 'N' times .
Whitewalker approaching order (X)                   Number of times-stabbing(N)
1                                                   1
2                                                   1
3                                                   2
.                                                   .
.                                                   .
55                                                  5
.                                                   .
98                                                  3
.                                                   .
.                                                   .
101                                                 4
.                                                   .
.                                                   .
.                                                   .
198                                                 4

This is the hint of the pattern that Arya needs to follow. Help Arya!

Input:
The first line of the input contains an integer T, denoting the number of test cases.
The description of each testcase follows. Each test case contains a single line with
one integer 'X' the Xth whitewalker  .

Output:
For each test case in, a new line print the number of stabs required to kill the
'Xth' whitewalker.

Constraints:
1 <= T <= 200
1 <= X <= 200

Example:
Input:
4
102
95
72
60

Output:
4
6
2
4

Explanation:
Testcase 1: The number of set bits in the given number will be the number of stabs
required to kill that whitewalker.
*/
#include<bits/stdc++.h>
using namespace std;
int no_of_stabs(int n)
{
	int res = 0;
	while (n > 0)
	{
		n = n & (n - 1); //Brian Kerningam's Algorithm
		res++;
	}
	return res;
} //O(no. of set bits)
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << no_of_stabs(n) << endl;
	}
	return 0;
}