#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m = 3, n = 2;
	//Using array of vectors
	cout << "Using array of vectors:" << endl;
	vector<int> arr[m];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			arr[i].push_back(10);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}