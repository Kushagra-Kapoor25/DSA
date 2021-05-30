#include <bits/stdc++.h>
using namespace std;
int deleteFunc(int  arr[], int d, int size)
{
	int i, index = -1;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == d)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
		return size;
	else
	{
		for (i = index; i < size - 1; i++)
			arr[i] = arr[i + 1];
		return size - 1;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[10], d, i;
	for (int i = 0; i < 10; i++)
		arr[i] = i;
	cin >> d;
	int result = deleteFunc(arr , d , 10);
	if (result == 10)
		cout << "Element not found";
	else
	{
		for (i = 0; i < result; i++)
			cout << arr[i] << " ";
	}
	return 0;
}