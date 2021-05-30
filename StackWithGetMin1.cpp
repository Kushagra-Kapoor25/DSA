#include<bits/stdc++.h>
using namespace std;
stack <int> ms;
stack <int> as;
void push(int x)
{
	if (ms.empty())
	{
		ms.push(x);
		as.push(x);
	}
	ms.push(x);
	if (as.top() >= x)
		as.push(x);

}
void pop()
{
	if (as.top() == ms.top())
		as.pop();
	ms.pop();
}
void getMin()
{
	if (as.empty())
		return;
	cout << as.top() << " ";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	push(4);
	getMin();
	push(2);
	getMin();
	push(2);
	getMin();
	push(3);
	getMin();
	pop();
	pop();
	getMin();
	pop();
	getMin();
	return 0;
}