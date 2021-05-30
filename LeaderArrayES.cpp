#include<bits/stdc++.h>
using namespace std;
int leader(int arr[], int size)
{
	int curr_ldr = arr[size - 1];
	cout << curr_ldr << " ";
	for (int i = size - 2; i >= 0; i--)
	{
		if (arr[i] > curr_ldr)
		{
			curr_ldr = arr[i];
			cout << curr_ldr << " ";
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {7, 10, 4, 10, 6, 5, 2, 3};
	int size = 8;
	leader(arr, size);
	return 1;
}