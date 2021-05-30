#include<bits/stdc++.h>
using namespace std;
int oddOccrElement(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
		res = res ^ arr[i];
	return res;
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
	cout << oddOccrElement(arr, n);
	return 0;
}
// XOR Properties:
// 0^x=x
// x^x=0
// x^y=y^x
// (x^y)^z=x^(y^z)