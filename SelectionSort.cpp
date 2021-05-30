// Selection Sort Technique
#include<bits/stdc++.h>
using namespace std;
void sSort(int arr[], int n)
{
	int nop = 0, nos = 0;
	for (int i = 0; i <= n - 2; i++)
	{
		nop++;
		int iMin = i;
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (arr[j] < arr[iMin])
			{
				iMin = j;
				nos++;
			}
		}
		swap(arr[iMin], arr[i]);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout << "No of passes:" << nop << endl;
	cout << "No of swaps:" << nos << endl;
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
	sSort(arr, n);
	return 0;
}