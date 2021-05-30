#include <bits/stdc++.h>
using namespace std;
void lPartition(int arr[], int l, int h)
{
	int pivot = arr[h];
	int i = l - 1;
	for (int j = l; j <= h - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[h]);
	for (int k = l; k <= h; k++)
		cout << arr[k] << " ";
}
int  main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, p;
	cin >> n >> p;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int l = 0, h = n - 1;
	swap(arr[p], arr[h]); //Swap the desired pivot with the last element in the array
	lPartition(arr, l, h);
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
// One traversal of the array
//Lomuto Partition assumes pivot as last element of the array.
// Garuntee about the correct location of the pivot.
// Number of comparisons are more than Hoare Partition
// Not stable
