#include<bits/stdc++.h>
using namespace std;
int largestArea(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int curr = arr[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] >= arr[i])
				curr += arr[i];
			else
				break;
		}
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] >= arr[i])
				curr += arr[i];
			else
				break;
		}
		res = max(res, curr);
	}
	return res;
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
	cout << largestArea(arr, n);
	return 0;
}

// Time complexity: O(n^2)