#include<bits/stdc++.h>
using namespace std;
// Fibonacci Serires: 0 1 1 2 3 5 8 13 21 34 . . .
//Tail  recursive
int fib(int n)
{
	if (n <= 2) // provdied n>0
		return n - 1;
	return fib(n - 1) + fib(n - 2);
}
int main()
{
#ifndef ONILINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int N;
	cin >> N;
	cout << fib(N) << " ";
}
