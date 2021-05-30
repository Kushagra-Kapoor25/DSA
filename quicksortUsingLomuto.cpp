#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[], int l , int h)
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
	return (i + 1);
}
void qSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p = Partition(arr, l, h);
		qSort(arr, l, p - 1);	//As pivot is at correct position
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
// Using Lomuto Partition
