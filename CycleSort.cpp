#include<bits/stdc++.h>
using namespace std;
void CycleSortDistinct(int arr[], int n)
{
	for (int cs = 0; cs < n - 1; cs++)
	{
		int item = arr[cs];
		int pos = cs;
		for (int i = cs + 1; i < n; i++)
		{
			if (arr[i] < item)
				pos++;
		}
		swap(item, arr[pos]);
		while (pos != cs)
		{
			pos = cs;
			for (int i = cs + 1; i < n; i++)
			{
				if (arr[i] < item)
					pos++;
			}
			swap(item, arr[pos]);
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
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	CycleSortDistinct(arr, n);
	for (auto x : arr)
		cout << x << " ";
	return 0;
}
//Time Complexity: O(n^2)
//Does minimum memory writes and can be useful for cases where memory write is costly.
//In-place and not stable
