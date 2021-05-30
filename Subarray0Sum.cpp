#include<bits/stdc++.h>
using namespace std;
bool checkSum(int arr[], int n)
{
	int s = 0 ;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
			return true;
		s += arr[i];
		if (s == 0)
			return true;
	}
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
	cout << checkSum(arr, n);
}