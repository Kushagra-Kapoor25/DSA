// Tower of Hanoi Problem
#include<bits/stdc++.h>
using namespace std;
void toh(int n, char s, char i, char d)
{
	if (n == 1)
	{
		cout << "Move disc 1 from " << s << " to " << d << endl;
		return;
	}
	toh(n - 1, s, d, i); // Moves n-1 discs to i from s using d.
	cout << "Move disc " << n << " from " << s << " to " << d << endl;
	toh(n - 1, i, s, d); // Moves n-1 discs to d from i using s.
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	char s, i, d;
	cin >> s >> i >> d;
	toh(n, s, i, d);
}