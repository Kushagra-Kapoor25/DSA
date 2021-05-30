#include<bits/stdc++.h>
using namespace std;
int insertElement(int arr[], int e, int cap, int n, int pos)
{
	if (n == cap)
		return -1;
	int idx = pos - 1;
	for (int i = n - 1; i >= idx ; i++)
		arr[i + 1] = arr[i];
	arr[idx] = e;
	return n + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i, n, arr[10], e, pos, capacity = 10;
	for (i = 0; i < 9; i++)
		arr[i] = i;
	n = i;
	cin >> pos >> e;
	int result = insertElement(arr, e, capacity, n, pos);
	if (result == -1)
		cout << "Sorry! Array is full.";
	else
	{
		cout << "Element inserted at position " << pos << "." << endl;
		for (i = 0; i < result; i++)
			cout << arr[i] << " ";
	}
	return 1;
}