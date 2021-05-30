#include<bits/stdc++.h>
using namespace std;
void searchMatrix(int *arr[], int r, int c, int s)
{
	int i = 0, j = c - 1;
	if (s < arr[0][0])
	{
		cout << "Not found";
		return;
	}
	if (s > arr[r - 1][c - 1])
	{
		cout << "Not found";
		return;
	}
	while (i < r && j >= 0)
	{
		if (arr[i][j] == s)
		{
			cout << "Found at [" << i << "," << j << "].";
			return;
		}
		else if (arr[i][j] > s)
			j--;
		else
			i++;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int r, c, s;
	cin >> r >> c;
	int *arr[r];
	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
		for (int j = 0; j < c; j++)
			cin >> arr[i][j];
	}
	cin >> s;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	searchMatrix(arr, r, c, s);
	return 0;
}