#include<bits/stdc++.h>
using namespace std;
void segregate(int arr[], int n) //Using Lomuto Partition
{
	int i = -1;
	for (int j = 0; j < n; j++)
	{
		if ((arr[j] % 2) == 0)
		{
			i++;
			swap(arr[i], arr[j]);
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
	segregate(arr, n);
	for (auto x : arr)
		cout << x << " ";
	return 0;
}

// Time Complexity: O(n)
// Aux Space: O(1)

/* Similar Types:
		1. Segregate Positive Negative
		2. Segregate Binary Numbers
		3. Segregate Odd Even
*/