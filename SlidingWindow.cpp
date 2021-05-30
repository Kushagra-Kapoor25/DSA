#include<bits/stdc++.h>
using namespace std;
int maxConsecutive(int arr[], int n, int k)
{
	int  max_sum = INT_MIN, curr_sum = 0;
	for (int i = 0; i < n; i++)
	{
		curr_sum += arr[i];
		if (i >= k)
			curr_sum -= arr[i - k];
		max_sum = max(curr_sum, max_sum);
	}
	return max_sum;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr [] = {1, 8, 30, -5, 20, 7};
	int k, size = 6;
	cin >> k;
	int res = maxConsecutive(arr, size, k);
	cout << res;
}
//Static Sliding Window Technique