/*
Given an array A[] of size N. Find the number of pairs (i, j) such that A_i XOR A_j = 0,
and 1 <= i < j <= N.

Input:
The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains N. followed by N separate integers.

Output:
For each test case, output a single integer i.e counts of Zeros Xors Pairs

Constraints
1 ≤ T ≤ 200
2 ≤ N ≤ 10^5
1 ≤ A[i] ≤ 10^5

Example:
Input :
2
5
1 3 4 1 4
3
2 2 2

Output :
2
3

Explanation :
Test Case 1: Index( 0, 3 ) and (2 , 4 ) are only pairs whose xors is zero so count is 2.

*/
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
int count_XOR_pairs(int arr[], int n)
{

	int count = 0;
	if ((arr[0]^arr[n - 1]) == 0)
		count = 1;
	for (int i = 1; i <= n - 1; i++)
	{
		if ((arr[i]^arr[i - 1]) == 0)
			count++;

	}
	return count;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		insertionSort(arr, n);
		cout << count_XOR_pairs(arr, n) << endl;
	}
	return 0;
}

//Recheck: Some test cases failed