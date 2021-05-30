#include<bits/stdc++.h>
using namespace std;
int minDiff(int arr[], int n , int m)
{
	if (m > n)
		return -1;
	sort(arr, arr + n);
	int res = arr[m - 1] - arr[0];
	for (int i = 1; (i + m - 1) < n; i++)
		res = min(res , (arr[i + m - 1] - arr[i]));
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << minDiff(arr, n, m) << " ";
	return 0;
}