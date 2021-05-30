#include<bits/stdc++.h>
using namespace std;
bool checkSubarraySum(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		int	curr_sum = 0;
		for (int j = i; j < n; j++)
		{
			curr_sum += arr[j];
			if (curr_sum == 0)
				return true;
		}
	}
	return false;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << checkSubarraySum( n,  arr) << endl;
	}
	return 0;
}