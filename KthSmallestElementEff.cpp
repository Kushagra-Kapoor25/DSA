#include<bits/stdc++.h>
using namespace std;
//Lomuto Partition
int partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int i = l - 1;
	for (int j = l; j <= r - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[r]);
	return (i + 1);
}
int kthSmallest(int arr[], int n , int k)
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int p = partition(arr, l, r);
		if (p == k - 1)
			return p;
		else if (p > k - 1)
			r = p - 1;
		else
			l = p + 1;
	}
	return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << arr[kthSmallest(arr, n, k)] << endl;
	return 0;
}
//Time complexity: O(n)