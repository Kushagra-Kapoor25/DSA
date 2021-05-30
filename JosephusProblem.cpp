// Josephus Problem: There are n people standing in a circle. We need to kill the kth person
// in every iteration. This has to be done in a circular manner. The gun is handed to the next
// person after the person who is killed. We have to find the position of the survivor.
// NOTE: Counting of person starts from 0.
#include <bits/stdc++.h>
using namespace std;
int jos(int n, int k)
{
	if (n == 1)
		return 0;
	else
		return (jos(n - 1, k) + k) % n;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	cout << "The person who will survive is on position " << jos(n, k);
	return 0;
}