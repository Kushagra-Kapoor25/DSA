#include<bits/stdc++.h>
using namespace std;
int count1(int arr[], int n)
{
	if (arr[0] == 1)
		return n;
	int low = 0, high = n - 1;
	int idx = 0;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if ((arr[mid] == 1) && (mid == 0 || arr[mid - 1] == 0))
		{
			idx = mid;
			break;
		}
		else if (arr[mid] < 1)
			low = mid + 1;
		else
			high = mid - 1;
	}
	if (idx == 0)
		return 0;
	else
	{
		int res = n - idx ;
		return res;
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
	cout << count1(arr, n);
	return 0;
}