#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1, n2 = r - m;
	int left[n1], right[n2];
	for (int i = 0; i < n1; i++)
		left[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		right[j] = arr[m + 1 + j];
	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2)
	{
		if (left[i] <= right[j]) //Equal sign makes sorting stable
			arr[k++] = left[i++];
		else
			arr[k++] = right[j++];
	}
	while (i < n1)
		arr[k++] = left[i++];
	while (j < n2)
		arr[k++] = right[j++];
}
void mergeSort(int arr[], int l, int r)
{
	if (r > l)
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
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
	int l = 0, r = n - 1;
	mergeSort(arr, l, r);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
// Aux Space: O(n1+n2)
// Time complexity: O(nlogn)