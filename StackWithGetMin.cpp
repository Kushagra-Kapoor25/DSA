#include<bits/stdc++.h>
using namespace std;
stack <int> s;
stack <int> m;
void push(int n)
{
	if (s.empty())
	{
		s.push(n);
		m.push(n);
	}
	s.push(n);
	if (m.top() >= s.top())
		m.push(n);
}
void pop()
{
	if (s.top() == m.top())
		m.pop();
	s.pop();
}

void getMin()
{
	cout << m.top() << " ";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	push(20);
	push(10);
	getMin();
	push(5);
	getMin();
	pop();
	getMin();
	pop();
	getMin();
	return 0;
}
//Time complexity: O(1)