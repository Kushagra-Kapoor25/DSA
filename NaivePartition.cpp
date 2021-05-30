#include<bits/stdc++.h>
using namespace std;
void partition(int arr[], int l, int h, int p)
{
	int temp[h - l + 1], index = 0;
	for (int i = l; i <= h; i++)
		if (arr[i] <= arr[p])
		{
			temp[index] = arr[i];
			index++;
		}
	for (int i = l; i <= h; i++)
		if (arr[i] > arr[p])
		{
			temp[index] = arr[i];
			index++;
		}
	for (int i = l; i <= h; i++ )
		arr[i] = temp[i - l];
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
	int p;
	cin >> p;
	int l = 0, h = n - 1;
	partition(arr, l, h, p);
	for (auto x : arr)
		cout << x << " ";
	return 0;
}
// Time Complexity: O(n)
// Aux Space: O(n)
// Three traversals of the array
// Stable