#include<bits/stdc++.h>
using namespace std;
// Two Pointer Approach
int numberOfPair(int arr[], int n, int x)
{
	int count = 0;
	int left = 0, right = n - 1;
	while (left < right)
	{
		if (arr[left] + arr[right] == x)
		{
			count++;
			left++;
			right--;
		}
		else if (arr[left] + arr[right] > x)
			right--;
		else
			left++;
	}
	return count;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;
	cout << numberOfPair(arr, n, x);
	return 0;
}