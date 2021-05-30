#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	unordered_map <string , int> m;
	m["gfg"];
	m["ide"];
	m.insert({"courses", 40});
	for (auto x : m)
		cout << x.first << " " << x.second << endl;
	return 0;
}
// This also uses hashing