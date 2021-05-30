#include<bits/stdc++.h>
using namespace std;
void matTranspose(vector<vector<int>>&mat)
{
	for (int i = 0; i < mat.size(); i++)
		for (int j = i + 1; j < mat[i].size(); j++)
			swap(mat[i][j], mat[j][i]);
}
void matRotate90(vector<vector<int>>&mat)
{
	for (int i = 0; i < mat.size(); i++)
	{
		int low = 0, high = mat[i].size() - 1;
		while (low < high)
		{
			swap(mat[low][i], mat[high][i]);
			low++;
			high--;
		}
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
	matTranspose(mat);
	cout << "Transpose" << endl;
	for (int i = 0; i < mat.size(); i++)
	{
		for (int j = 0; j < mat.size(); j++)
			cout << mat[i][j] << " " ;
		cout << endl;
	}
	matRotate90(mat);
	cout << "Rotated Matrix" << endl;
	for (int i = 0; i < mat.size(); i++)
	{
		for (int j = 0; j < mat.size(); j++)
			cout << mat[i][j] << " " ;
		cout << endl;
	}
	return 0;
}