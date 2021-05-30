#include<bits/stdc++.h>
using namespace std;
int leftMostIndex(int arr[], int n, int x)
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] == x && (mid == 0 || arr[mid - 1] != x))
			return mid;
		else if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
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
	cout << leftMostIndex(arr, n, x);
	return 0;
}