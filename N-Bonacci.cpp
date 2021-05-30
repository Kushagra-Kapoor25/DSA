#include<bits/stdc++.h>
using namespace std;
void n_bonacci(int n, int m)
{
	int arr[m];
	for (int i = 0; i < n - 1; i++)
		arr[i] = 0;
	arr[n - 1] = 1;
	int s = 1;
	for (int i = n ; i < m; i++)
	{
		if (i == n)
			arr[i] = s;
		else if (i > n)
		{
			s += (arr[i - 1] - arr[i - n - 1]);
			arr[i] = s;
		}
	}
	for (int i = 0; i < m; i++)
		cout << arr[i] << " ";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	n_bonacci(n, m);
}
//Sliding Window Technique