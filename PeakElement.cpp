#include<bits/stdc++.h>
using namespace std;
// Prefers the peak on the right side
// We can obtain the left peak by varying the code
int peakElement(int arr[], int n)
{
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (((arr[mid] > arr[mid - 1]) || (mid == 0)) && ((arr[mid] > arr[mid + 1]) || (mid == n - 1)))
			return arr[mid];
		else if (arr[mid] < arr[mid + 1])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
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
	int low = 0, high = n - 1;
	cout << peakElement(arr,  n );
	return 0;
}