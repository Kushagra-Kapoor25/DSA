#include<iostream>
#include <stack>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	stack <int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << s.empty() << endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << s.size() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.size() << endl;
	cout << s.empty() << endl;
	return 0;
}
