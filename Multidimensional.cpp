#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//Using Double Pointers
	int m = 3, n = 2;
	cout << "Using Double pointers:" << endl;
	int **arr; // Pointer to Array of Pointers
	arr = new int*[m];
	for (int i = 0; i < m; i++)
		arr[i] = new int[n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}