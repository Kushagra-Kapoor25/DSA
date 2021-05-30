#include<bits/stdc++.h>
using namespace std;
int unionOfElements(int c[] , int size)
{
	int res = 0;
	for (int i = 0; i < size; i++)
	{
		bool flag = false;
		for (int j = 0; j < i ; j++)
			if (c[i] == c[j])
			{
				flag = true;
				break;
			}
		if (flag == false)
			res++;
	}
	return res;
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
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	int c[m + n];
	for (int i = 0; i < m; i++ )
		c[i] = a[i];
	for (int i = 0; i < n; i++)
		c[m + i] = b[i];
	cout << unionOfElements(c, m + n);
	return 0;
}
// This a naive solution