#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n)
{
	int res = arr[0];
	int maxEnding = arr[0];
	for (int i = 1; i < n; i++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(res, maxEnding);
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[ ] = { -3, 8, -2, 4, -5, 6 };
	int size = 6;
	int res = maxSubarraySum(arr, size);
	cout << res;
}
// This is known as Kadane's Algorithm.