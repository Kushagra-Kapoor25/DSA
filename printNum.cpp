#include <bits/stdc++.h>
using namespace std;
// Prints from 1 to n
void fun1(int n)
{
	if (n <= 0) return;
	fun1(n - 1);
	cout << n << " ";
}

// Prints from n to 1
// Tail recursive function so is faster than fun1()
// Tail recursive functions are optimised automatically by the compilers
// Tail recursive functions are way faster because they do not have to hold the state.
// When child function finishes, we do not return the control to the parent functions.
void fun2(int n)
{
	if (n <= 0) return;
	cout << n << " ";
	fun2(n - 1);
}

//Tail recursive function for fun1()
void fun3(int n, int k = 1)
{
	if (n <= 0)
		return;
	cout << k << " ";
	fun3(n - 1, k + 1);
}

//Factorial of n
int fact(int n)
{
	if (n == 0) return 1;
	else return n * fact(n - 1);
}

//Factorial of n using tail recursion
int fact1(int n, int val = 1)
{
	if (n == 0) return val;
	else return fact1(n - 1, n * val);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen( "input.txt", "r", stdin);
	freopen( "output.txt", "w", stdout);
#endif
	int N;
	cin >> N;
	fun1(N);
	cout << endl;
	fun2(N);
	cout << endl;
	fun3(N);
	cout << endl;
	cout << "Factorial without tail recursion:" << fact(N) << endl;
	cout << "Factorial with tail recursion:" << fact1(N) << endl;
	return 0;
}