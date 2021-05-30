#include<bits/stdc++.h>
using namespace std;
vector <int> previousSmaller(int arr[], int n)
{
	stack <int> s;
	vector<int> v;
	s.push(0);
	v.push_back(-1);
	for (int i = 1; i < n; i++)
	{
		while (s.empty() == false && arr[s.top()] >= arr[i])
			s.pop();
		int psi = (s.empty()) ? -1 : s.top();
		v.push_back(psi);
		s.push(i);
	}
	return v;
}

vector<int> nextSmaller(int arr[], int n)
{
	stack <int> s;
	vector<int> v;
	s.push(n - 1);
	for (int i = n - 1; i >= 0; i--)
	{
		while (s.empty() == false && arr[s.top()] >= arr[i])
			s.pop();
		int nsi = (s.empty()) ? n : s.top();
		v.push_back(nsi);
		s.push(i);
	}
	reverse(v.begin(), v.end());
	return v;
}
int largerstAreaHistogram(vector<int> ps, vector<int> ns, int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int curr = arr[i];
		curr += (i - ps[i] - 1) * arr[i];
		curr += (ns[i] - i - 1) * arr[i];
		res = max(curr, res);
	}
	return res;
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
	vector <int> ps;
	vector<int> ns;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	ps = previousSmaller(arr, n);
	ns = nextSmaller(arr, n);
	for (auto x : ps)
		cout << x << " ";
	cout << endl;
	for (auto x : ns)
		cout << x << " ";
	cout << endl
	     ;
	cout << largerstAreaHistogram(ps, ns, arr, n);
	return 0;
}