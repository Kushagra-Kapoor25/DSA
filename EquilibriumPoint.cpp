#include<bits/stdc++.h>
using namespace std;
bool EquilibriumPoint(int arr[], int n)
{
	int preSum[n];
	preSum[0] = arr[0];
	for (int i = 1; i < n; i++)
		preSum[i] = arr[i] + preSum[i - 1];
	if (preSum[n - 1] == preSum[0])
		return true;
	if (preSum[n - 2] == 0)
		return true;
	for (int i = 0; i < n - 2; i++)
	{
		if (preSum[i] == arr[i + 2])
			return true;
	}
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
	cout << EquilibriumPoint(arr, n);
}
// Prefix Sum Technique
// Auxillary Space: O(n)
// Time complexity: O(n)