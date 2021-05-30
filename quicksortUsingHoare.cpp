#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[], int l, int h)
{
	int pivot = arr[l];
	int i = l - 1, j = h + 1;
	while (true)
	{
		do {
			i++;
		} while (arr[i] < pivot);
		do {
			j--;
		} while (arr[j] > pivot);
		if (i >= j)
			return j;
		swap(arr[i], arr[j]);
	}
}
void qSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p = Partition(arr, l, h);
		qSort(arr, l, p);
		qSort(arr, p + 1, h);
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int l = 0, h = n - 1;
	qSort(arr, l, h);
	for (auto x : arr)
		cout << x << " ";
	return 0;
}
// Using Hoares's Partition
// Hoare's Partition is 3 times faster than Lomuto Partition