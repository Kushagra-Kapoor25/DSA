#include<bits/stdc++.h>
using namespace std;
// Two Pointer Approach
bool isTripletSum(int arr[], int left, int right, int x)
{
	while (left < right)
	{
		if (arr[left] + arr[right] == x)
			return true;
		else if (arr[left] + arr[right] > x)
			right--;
		else
			left++;
	}
	return false;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x, k = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (isTripletSum(arr,  i + 1, n - 1, x - arr[i]))
		{
			cout << "Yes";
			k = 0;
			break;
		}
		else
			k = 1;

	}
	if (k == 1)
		cout << "No";
	return 0;
}