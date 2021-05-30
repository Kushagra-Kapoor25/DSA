#include<bits/stdc++.h>
using namespace std;
bool EquilibriumPoint(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	int l_sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (l_sum == sum - arr[i])
			return true;
		l_sum += arr[i];
		sum -= arr[i];
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
// Auxillary Space: O(1)
// Time complexity: O(n)