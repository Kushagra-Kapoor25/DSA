#include<bits/stdc++.h>
using namespace std;
void intersection(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (i > 0 && a[i - 1] == a[i])  //To avoid duplicates
		{
			i++;
			continue;
		}
		else if (a[i] < b[j])
			i++;
		else if (b[j] < a[i])
			j++;
		else
		{
			cout << a[i] << " ";
			i++;
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
	intersection(a, b, m, n);
	return 0;
}
// Time complexity: O(m+n)
// Aux Space: O(1)