#include<bits/stdc++.h>
using namespace std;
int arr[10];
void insert(int e) //O(1)
{
	arr[e] = e;
}
void search(int e)	//O(1)
{
	if (e == arr[e])
		cout << arr[e] << endl;
	else
		cout << "Not found" << endl;
}
void remove(int e)	//O(1)
{
	arr[e] = -1;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fill(arr, arr + 100, -1);
	insert(0);
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(9);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	search(3);
	search(6737);
	remove(1);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
	search(1);
	return 0;
}