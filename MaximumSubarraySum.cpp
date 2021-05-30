#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n)
{
	int maxSum = arr[0];
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += arr[j];
			maxSum = max(sum, maxSum);
		}
	}
	return maxSum;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[ ] = { -6, -1, -8};
	int size = 3;
	int res = maxSubarraySum(arr, size);
	cout << res;
}