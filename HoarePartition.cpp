#include<bits/stdc++.h>
using namespace std;
void hoarePartition(int arr[], int l, int h)
{
	int pivot = arr[l];
	int i = l - 1, j = h + 1;
	while (true) {
		do {
			i++;
		} while (arr[i] < pivot);

		do {
			j--;
		} while (arr[j] > pivot);
		if (i >= j)
			return ;
		swap(arr[i], arr[j]);
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
	hoarePartition(arr, l, h);
	for (auto x : arr)
		cout << x << " ";
	return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
// One traversal of the array
// Hoare Partition assumes pivot as first element of the array.
// Does not garuntee about the correct location of the pivot.
// Better than Lomuto Partition in avg case
// Number of comparisons are less than Lomuto Partition
// Not stable