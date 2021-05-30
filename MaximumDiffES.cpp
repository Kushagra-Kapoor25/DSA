#include<bits/stdc++.h>
using namespace std;
int MaxDiff(int arr[], int size)
{
	int res = arr[1] - arr[0], minVal = arr[0];
	for (int j = 1; j < size; j++)
	{
		res = max(res, arr[j] - minVal);
		minVal = min(minVal, arr[j]);
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {2 , 3 , 10, 6, 4, 8, 1};
	int size = 7;
	int diff = MaxDiff(arr, size);
	cout << diff;
	return 1;
}