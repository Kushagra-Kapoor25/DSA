#include<bits/stdc++.h>
using namespace std;
int countInversions(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (arr[i] > arr[j] && j > i)
				count++;
		}
	}
	return count;
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
	cout << countInversions(arr, n);
	return 0;
}