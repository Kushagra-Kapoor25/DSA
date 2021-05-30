#include<bits/stdc++.h>
using namespace std;
void unionArr(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (i > 0 && a[i] == a[i - 1])
		{
			i++;
			continue;
		}

		if (j > 0 && b[j] == b[j - 1])
		{
			j++;
			continue;
		}
		if (a[i] < b[j])
		{
			cout << a[i] << " ";
			i++;
		}
		else if (b[j] < a[i])
		{
			cout << b[j] << " ";
			j++;
		}
		else
		{
			cout << a[i] << " ";
			i++;
			j++;
		}
	}
	while (i < m)
	{
		if (i == 0 || a[i] != a[i - 1])
		{
			cout << a[i] << " ";
			i++;
		}
	}

	while (j < n)
	{
		if (j == 0 || b[j] != b[j - 1])
		{
			cout << b[j] << " ";
			j++;
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int  m, n;
	cin >> m >> n;
	int a[m], b[n];
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int j = 0; j < n; j++)
		cin >> b[j];
	unionArr(a, b, m, n);
	return 0;
}
// Time complexity: O(m+n)
// Aux Space: O(1)