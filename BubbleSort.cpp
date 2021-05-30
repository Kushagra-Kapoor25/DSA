// Advanced Bubble Sort Technique
// Number of passes are always n-1.
#include<bits/stdc++.h>
using namespace std;
void bSort(int arr[], int n)
{
	int nop = 0, nos = 0;
	for (int i = 1; i <= n - 1  ; i++)
	{
		nop++;
		int flag = 0;
		for (int j = 0; j <= n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				swap(arr[j], arr[j + 1]);
				nos++;
			}
		}
		if (flag == 0)
			break;
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
	bSort(arr, n);
	return 0;
}