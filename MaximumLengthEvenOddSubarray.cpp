#include<bits/stdc++.h>
using namespace std;
int MaxSubarrOdEv(int arr[], int n)
{
	int c = 1, res = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if ((arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0))
		{
			c++;
			res = max(res, c);
		}
		else
			c = 1;
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {52, 10, 20, 6, 32, 8};
	int size = 6;
	int res = MaxSubarrOdEv(arr, size);
	cout << res;
	return 1;
}