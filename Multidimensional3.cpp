#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m = 3, n = 2;
	//Using vector of vectors
	cout << "Using vector of vectors:" << endl;
	vector <vector<int>> arr;
	for (int i = 0; i < m; i++)
	{
		vector<int> v;
		for (int j = 0; j < n; j++)
			v.push_back(10);
		arr.push_back(v);
	}
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}