#include<bits/stdc++.h>
using namespace std;
int countAndMerge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1, n2 = r - m;
	int left[n1], right[n2];
	for (int i = 0; i < n1; i++)
		left[i] = arr[l + i];
	for (int i = 0; i < n2; i++)
		right[i] = arr[m + 1 + i];
	int res = 0, i = 0, j = 0, k = l;
	while (i < n1 && j < n2)
	{
		if (left[i] < right[j])
			arr[k++] = left[i++];
		else
		{
			arr[k++] = right[j++];
			res = res + (n1 - i); //Counts all the possibilities of inversions with arr[i]
		}
	}
	while (i < n1)
		arr[k++] = left[i++];
	while (j < n2)
		arr[k++] = right[j++];
	return res;
}
int countInversion(int arr[], int l, int r)
{
	int res = 0;
	if (l < r)
	{
		int m = l + (r - l) / 2;
		res += countInversion(arr, l, m); //Both x and y are in the left half
		res += countInversion(arr, m + 1, r); //Both x and y are in the right half
		res += countAndMerge(arr, l, m, r); //x is in the left half and y is in the right half
	}
	return res;
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
	cout << countInversion(arr, l, r) << endl;
	return 0;
}