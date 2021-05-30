#include<bits/stdc++.h>
using namespace std;
int MaxCon1(int arr[], int n)
{
	int res = 0, curr = 0;
	for (int i = 0 ; i < n; i++)
	{
		if (arr[i] == 0)
			curr = 0;
		else
		{
			curr++;
			res = max(res, curr);
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
	int arr[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
	int size = 9;
	int res = MaxCon1(arr, size);
	cout << res;
}

