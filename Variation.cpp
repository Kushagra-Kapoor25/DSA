/* Given an array of n number that has
   values in range [1...n+1]. Every no.
   appears exactly once. Hence one no.
   is missing. Find the missing no.

   Input 1: arr[]={1,4,3}
   Output 1: 2
   Input 2: arr[]={1,5,3,2}
   Output 2:4 */

#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
		res = res ^ arr[i];
	for (int i = 1; i <= n + 1; i++)
		res = res ^ i;
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
	cout << missingNumber(arr, n);
	return 0;
}