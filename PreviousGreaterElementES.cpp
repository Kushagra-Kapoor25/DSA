#include<bits/stdc++.h>
using namespace std;
void PreGreaterElement(int arr[] , int n)
{
	stack <int> s;
	s.push(arr[0]);
	cout << -1 << " ";
	for (int i = 1; i < n; i++)
	{
		while (s.empty() == false && s.top() <= arr[i])
			s.pop();
		int greaterElement = s.empty() ? -1 : s.top();
		cout << greaterElement << " ";
		s.push(arr[i]);
	}
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
	PreGreaterElement(arr, n);
	return 0;
}