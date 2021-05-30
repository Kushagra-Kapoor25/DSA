#include<bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int low, int high, int x)
{
	if (low > high) // Base case
		return -1;
	int mid = low + (high - low) / 2;
	if (arr[mid] == x)
		return mid;
	if (arr[mid] > x)
		return binSearch(arr, low, mid - 1, x);
	else
		return binSearch(arr, mid + 1, high, x);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;
	cout << binSearch(arr, 0, n - 1, x);
	return 0;
}