#include<bits/stdc++.h>
using namespace std;
void sortingArr(int arr[], int n)
{
	int low = 0, mid = 0, high = n - 1;
	while (mid <= high)
	{
		switch (arr[mid])
		{
		case 0:	swap(arr[low], arr[mid]);
			low++;
			mid++;
			break;
		case 1: mid++;
			break;
		case 2: swap(arr[mid], arr[high]);
			high--;
			break;
		}
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
	int  arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sortingArr(arr, n);
	for (auto x : arr)
		cout << x << " ";
	return 0;
}
// This algorithm is known as Dutch National Flag Algorithm.
// Time complexity: O(n)
// Aux Space: O(1)

/* Similar Problems:
		1. Three way partitioning when multiple occurances of a pivot may occur.
		2. Partitioning around a range.
*/