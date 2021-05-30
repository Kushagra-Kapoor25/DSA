#include<bits/stdc++.h>
using namespace std;
void mSort(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (a[i] < b[j])
			cout << a[i++] << " ";
		else
			cout << b[j++] << " ";
	}
	while (i < m)
		cout << a[i++] << " ";
	while (j < n)
		cout << b[j++] << " ";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n;
	cin >> m >> n;
	int a[m], b[n];
	for (int i = 0; i < m ; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	mSort(a, b, m, n);
	return 0;
}
// Time complexity: O(m+n)