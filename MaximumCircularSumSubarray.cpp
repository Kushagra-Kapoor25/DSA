#include<bits/stdc++.h>
using namespace std;
int MaxCirSubArrSum(int arr[], int n)
{
	int res = arr[0];
	for (int i = 0; i < n; i++)
	{
		int curr_sum = arr[i];
		int max_sum = arr[i];
		for (int j = 1; j < n; j++)
		{
			int index = (i + j) % n;
			curr_sum += arr[index];
			max_sum = max(curr_sum, max_sum);
		}
		res = max(max_sum, res);
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {5, -2, 3, 4};
	int size = 4;
	int res = MaxCirSubArrSum(arr, size);
	cout << res;
}