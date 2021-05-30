#include<bits/stdc++.h>
using namespace std;
void spiralTraversal(int *mat[], int r, int c)
{
	int top = 0, bottom = r - 1, left = 0, right = r - 1;
	while (top <= bottom && left <= right)
	{
		for (int i = left; i <= right; i++)  //top row
			cout << mat[top][i] << " " ;
		top++;

		for (int i = top; i <= bottom; i++)  //right column
			cout << mat[i][right] << " " ;
		right--;

		if (top <= bottom)    				 //bottom row in reverse order
		{
			for (int i = right; i >= left; i--)
				cout << mat[bottom][i] << " " ;
			bottom--;
		}

		if (left <= right)					 //left column in reverse order
		{
			for (int i = bottom; i >= top; i--)
				cout << mat[i][left] << " " ;
			left++;
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int r, c;
	cin >> r >> c;
	int *arr[r];
	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
		for (int j = 0; j < c; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	spiralTraversal(arr, r, c);
	return 0;
}