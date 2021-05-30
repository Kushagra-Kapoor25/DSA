/* Question
   Split array in three equal sum subarrays
   Consider an array A of n integers. Determine if array A can be split into three
   consecutive parts such that sum of each part is equal. If yes then print 1 else 0.

   Examples:
	Input : arr[] = {1,-1,2,-2,5,-5}
	Output: 1
	Input : arr[] = {5,2,6,1,1,1,5}
	Output: 1
	Input : arr[] = {2, 3, 4}
	Output: 0  */

// Code:
#include<bits/stdc++.h>
using namespace std;
// Function Equal Parts to check whether the array can be split into 3 equal sum subarrays
// or not.
bool EqualParts(int arr[], int n)
{
	int s = 0;
	for (int i = 0 ; i < n; i++)
		s += arr[i];
	if (s % 3 != 0)
		return false;
	int d = s / 3;
	int s1 = d;
	int k = 1, count = 0, preSum = 0;
	for (int i = 0; i < n; i++)
	{
		preSum += arr[i];
		if (preSum == s1)
		{
			k++;
			count++;
			s1 = d * k;
		}
	}
	if (count == 3)
		return true;
	return false;

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << EqualParts(arr, n);
}
// Time complexity: O(n)
// Auxillary space: O(1)