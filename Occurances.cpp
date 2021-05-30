#include<bits/stdc++.h>
using namespace std;
// Leftmost Occurance
int lOcc(int arr[], int low, int high, int x, int n)
{
	if (low > high) // Base Case
		return -1;
	int mid = low + (high - low) / 2;
	if ((arr[mid] == x) && (mid == 0 || arr[mid - 1] != x))
		return mid;
	else if (arr[mid] < x)
		return lOcc(arr, mid + 1, high, x, n);
	else
		return lOcc(arr, low, mid - 1, x, n);
}

// Rightmost Occurance
int rOcc(int arr[], int low, int high, int x, int n)
{
	if (low > high) // Base case
		return -1;
	int mid = low + (high - low) / 2;
	if ((arr[mid] == x) && (mid == n - 1 || arr[mid + 1] != x))
		return mid;
	else if (arr[mid] > x)
		return rOcc(arr, low, mid - 1, x, n);
	else
		return rOcc(arr, mid + 1, high, x, n);
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
	int x;
	cin >> x;
	int l = lOcc(arr, 0, n - 1, x, n);
	int r = rOcc(arr, 0, n - 1, x, n);
	if (l == -1 || r == -1)
		cout << "0";
	else
	{
		int res = r - l + 1;
		cout << res;
	}
	return 0;
}