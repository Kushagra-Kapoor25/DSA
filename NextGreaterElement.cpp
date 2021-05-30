#include<bits/stdc++.h>
using namespace std;
void nextGreater(int arr[] , int n)
{
	for (int i = 0; i < n; i++)
	{
		int j;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				cout << arr[j] << " ";
				break;
			}
		}
		if (j == n)
			cout << -1 << " ";
	}
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
	nextGreater(arr, n);
	return 0;
}
// Naive Solution
// Time Complexity: O(n^2)