#include <bits/stdc++.h>
using namespace std;
int remDups(int arr[], int s)
{
	int res = 1;
	for (int i = 1; i < s; i++)
	{
		if (arr[i] != arr[res - 1])
		{
			arr[res] = arr[i];
			res ++;
		}
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {10, 10, 10, 20, 20, 20, 30, 40, 40};
	int size = 9;
	int result = remDups(arr, size);
	for (int i = 0; i < result; i++)
		cout << arr[i] << " ";
	return 1;
}