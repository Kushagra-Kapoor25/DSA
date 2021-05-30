#include<bits/stdc++.h>
using namespace std;
int minCoins(int arr[], int n, int amount)
{
	sort(arr, arr + n, greater<int>());
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= amount)
		{
			int c = amount / arr[i];
			res = res + c;
			amount = amount - c * arr[i];
		}
		if (amount == 0)
			break;
	}
	if (amount == 0)
		return res;
	else
		return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 2, 5, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	int amount = 52;
	cout << minCoins(arr, n, amount);
	return 0;
}