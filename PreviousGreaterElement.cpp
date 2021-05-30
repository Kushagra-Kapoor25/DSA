#include<bits/stdc++.h>
using namespace std;
void PreGreaterElement(int arr[], int n)
{
	for (int i = 0 ; i < n; i++)
	{
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > arr[i])
			{
				cout << arr[j] << " ";
				break;
			}
		}
		if ( j == -1)
			cout << -1 << " ";
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
	PreGreaterElement(arr, n);
	return 0;
}
// Time Complexity: O(n^2)