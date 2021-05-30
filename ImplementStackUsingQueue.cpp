#include<bits/stdc++.h>
using namespace std;
struct Stack
{
	queue <int> q1, q2;
	int top()
	{
		return q1.front();
	}
	int pop()
	{
		int front = q1.front();
		q1.pop();
		return front;
	}
	int size()
	{
		return q1.size();
	}
	void push(int x)
	{
		while (!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}
		q1.push(x);
		while (!q2.empty())
		{
			q1.push(q2.front());
			q2.pop();
		}
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << s.top() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	return 0;
}