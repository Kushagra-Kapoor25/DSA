#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreater(int arr[], int n)
{
	vector<int> v;
	stack <int> s;
	s.push(arr[n - 1]);
	v.push_back(-1);
	for (int i = n - 2; i >= 0 ; i --)
	{
		while (s.empty() == false && s.top() <= arr[i])
			s.pop();
		int gE = (s.empty()) ? -1 : s.top();
		v.push_back(gE);
		s.push(arr[i]);
	}
	reverse(v.begin(), v.end());

	return v;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	vector <int> v1;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	v1 = nextGreater(arr, n);
	for (auto x : v1)
		cout << x << " ";
	return 0;
}