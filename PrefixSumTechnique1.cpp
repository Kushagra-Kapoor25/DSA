#include<bits/stdc++.h>
using namespace std;
int prefixSum(int arr[], int n, int l, int r)
{
	int preSum[n];
	preSum[0] = arr[0];
	for (int i = 1; i < n; i++)
	{
		preSum[i] = arr[i] + preSum[i - 1];
	}
	int res;
	if (l == 0)
		res = preSum[r];
	else
		res = preSum[r] - preSum[l - 1];
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, l, r;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> l >> r;
	cout << prefixSum(arr, n, l, r);
}
// Prefix Sum Technique