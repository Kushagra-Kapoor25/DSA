#include<bits/stdc++.h>
using namespace std;
void reverse(queue <int> &q)
{
	stack <int> s;
	while (q.empty() == false)
	{
		s.push(q.front());
		q.pop();
	}
	while (s.empty() == false)
	{
		q.push(s.top());
		s.pop();
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	queue <int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	reverse(q);
	cout << q.front() << " " << q.back();
	return 0;
}