#include<bits/stdc++.h>
using namespace std;
int waterTrapped(int arr[], int size)
{
	int res = 0;
	int lMax[size], rMax[size];
	lMax[0] = arr[0];
	for (int i = 1; i < size; i++)
		lMax[i] = max(arr[i], lMax[i - 1]);
	rMax[size - 1] = arr[size - 1];
	for (int i = size - 2; i >= 0; i--)
		rMax[i] = max(arr[i], rMax[i + 1]);
	for (int i = 0; i < size; i++)
		res = res + (min(lMax[i], rMax[i]) - arr[i]);
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {3, 0, 1, 2, 5};
	int result = waterTrapped(arr, 5);
	cout << result;
	return 1;
}