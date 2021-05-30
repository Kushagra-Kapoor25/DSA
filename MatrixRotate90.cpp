#include<bits/stdc++.h>
using namespace std;
void matRotate90(vector<vector<int>> mat)
{
	for (int i = mat[i].size() - 1; i >= 0; i--)
	{
		for (int j = 0; j < mat.size(); j++)
			cout << mat[j][i] << " ";
		cout << endl;
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n ;
	vector<vector<int>> mat;
	for (int i = 0; i < n; i++)
	{
		vector<int> v;
		for (int j = 0; j < n; j++)
		{
			int data;
			cin >> data;
			v.push_back(data);
		}
		mat.push_back(v);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}
	cout << "Rotated Matrix" << endl;
	matRotate90(mat);
	return 0;
}