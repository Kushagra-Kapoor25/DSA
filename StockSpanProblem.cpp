#include<bits/stdc++.h>
using namespace std;
// Naive Solution
void printSpan(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int span = 1;
		for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
			span++;
		cout << span << " ";
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
	printSpan(arr, n);
	return 0;
}
// Time complexity: O(n^2)
