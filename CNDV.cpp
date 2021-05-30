/* Question:
Count the number of distinct absolute values from a sorted array containing N integers.
An absolute value of a number is | a |  ( positive ) value of it.

Input

The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow.
The first line of each test case contains an integer N, where N is the size of the array
A[ ]. The second line of each test case contains N space separated sorted integers,
denoting elements of the array A[ ].
Note: The array can contain duplicate values.

Output:

For each test case output a single line containing the no of distinct absolute values
present in the array .
Remember to output the answer of each test case in a new line.

Constraints:

1 <= T <= 100
1 <= N <= 30
- 10 ^ 9 <= A[i] <= 3 * 10 ^ 9

Examples :

Input:
3
4
-35 73 73 73
9
-44 -31 -6 6 46 52 52 55 93
6
-3 -2 0 3 4 5

Output:

2
7
5

Expected Time Complexity:
O(n) */

#include <bits/stdc++.h>
using namespace std;
int distinct_absolute_elements(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		v.at(i) = abs(v.at(i));
	sort(v.begin(), v.end());
	int count = 1;

	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v.at(i) != v.at(i + 1))
			count++;
	}
	return count;
}
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
		vector<int> v;

		for (int i = 0; i < n; i++)
		{
			int data;
			cin >> data;
			v.push_back(data);
		}
		cout << distinct_absolute_elements(v);
		cout << endl;
	}
}