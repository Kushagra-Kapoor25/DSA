/* Question Amazon
Given an array of integers, write a function that returns true if there is a
triplet (a, b, c) that satisfies a^2 + b^2 = c^2.

Input:
The first line contains T, denoting the number of testcases. Then follows description of
testcases. Each case begins with a single positive integer N denoting the size of array.
The second line contains the N space separated positive integers denoting the elements
of array A.

Output:
For each testcase, print "Yes" or  "No" whether it is Pythagorean Triplet or not
(without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= A[i] <= 1000

Example:
Input:
1
5
3 2 4 6 5

Output:
Yes

Explanation:
Testcase 1: a=3, b=4, and c=5 forms a pythagorean triplet, so we print "Yes"
*/

#include<bits/stdc++.h>
using namespace std;
bool pythagorean_Triplets(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = arr[i] * arr[i];
	sort(arr, arr + n );
	//4 9 16 25 36
	for (int i = n - 1; i >= 2; i--)
	{
		int j = i - 1, k = 0;
		while (k < j)
		{
			if (arr[k] + arr[j] == arr[i])
				return true;
			else if (arr[k] + arr[j] < arr[i])
				k++;
			else
				j--;
		}
	}
	return false;
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
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		if (pythagorean_Triplets(arr, n))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}