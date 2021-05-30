#include<bits/stdc++.h>
using namespace std;
int oddOccrElement(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if (count % 2 != 0)
			return arr[i];
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
	cout << oddOccrElement(arr, n);
	return 0;
}