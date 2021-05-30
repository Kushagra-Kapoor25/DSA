#include <bits/stdc++.h>
using namespace std;
void closestGreaterElementLS(int arr[], int n)
{
	int greatestElement = INT_MIN;
	for (int i = 0; i < n; i++)
		greatestElement = max(greatestElement, arr[i]);
	cout << greatestElement;
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
	closestGreaterElementLS(arr, n);
	return 0;
}