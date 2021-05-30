#include<bits/stdc++.h>
using namespace std;
void oddOccrNum(int arr[], int n)
{
	int XOR = 0;
	for (int i = 0; i < n; i++)
		XOR = XOR ^ arr[i];
	int sn = XOR & ~(XOR - 1); //rightmost set bit
	int res1 = 0, res2 = 0;
	for (int i = 0; i < n; i++)
	{
		if ((sn & arr[i]) != 0)
			res1 = res1 ^ arr[i];
		else
			res2 = res2 ^ arr[i];
	}
	cout << res1 << " " << res2;
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
	oddOccrNum(arr, n);
	return 0;
}