#include<bits/stdc++.h>
using namespace std;
int MaxCirSubArrSum(int arr[], int n)
{
	int max_sum = arr[0];
	int curr_sum = arr[0];
	for (int i = 1; i < n; i++)
	{
		curr_sum = max(arr[i], curr_sum + arr[i]);
		max_sum = max(curr_sum, max_sum);
	}
	int min_sum = arr[0];
	for (int i = 1; i < n; i++)
	{
		curr_sum = min(arr[i], curr_sum + arr[i]);
		min_sum = min(curr_sum, min_sum);
	}
	int sum = arr[0];
	for (int i = 1; i < n; i++)
		sum += arr[i];
	int cir_sum = sum - min_sum;
	int res = max(max_sum, cir_sum);
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {5, -6, 3, 4};
	int size = 4;
	int res = MaxCirSubArrSum(arr, size);
	cout << res;
}
//Kadane's Algorithm