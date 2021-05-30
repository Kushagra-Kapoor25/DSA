#include<bits/stdc++.h>
using namespace std;
bool SumPresent(int arr[], int n, int reqSum)
{
	int curr_sum = arr[0], s = 0;
	for (int e = 1; e < n; e++)
	{
		//clean prev window
		while (curr_sum > reqSum && s < e - 1)
		{
			curr_sum -= arr[s];
			s++;
		}
		if (curr_sum == reqSum)
			return true;
		else
			curr_sum += arr[e];
	}
	return (curr_sum == reqSum);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr [] = {1, 8, 30, 5, 20, 7};
	int k, reqSum, size = 6;
	cin >> reqSum;
	bool res = SumPresent(arr, size, reqSum);
	cout << res;
}
//Dynamic Sliding Window Technique
// The condition is that the required sum must be a subarray.