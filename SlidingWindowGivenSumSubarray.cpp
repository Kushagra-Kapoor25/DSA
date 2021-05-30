#include<bits/stdc++.h>
using namespace std;
bool SumPresent(int arr[], int n, int reqSum, int k)
{
	int  curr_sum = 0;
	for (int i = 0; i < n; i++)
	{
		curr_sum += arr[i];
		if (i >= k)
			curr_sum -= arr[i - k];
		if (curr_sum == reqSum)
			return true;
	}
	return false;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr [] = {1, 8, 30, -5, 20, 7};
	int k, reqSum, size = 6;
	cin >> k >> reqSum;
	bool res = SumPresent(arr, size, reqSum, k);
	cout << res;
}
//Static Sliding Window Technique