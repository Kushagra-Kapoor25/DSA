#include<bits/stdc++.h>
using namespace std;
struct MyHash
{
	int *arr;
	int cap, size;
	MyHash(int c)
	{
		cap = c;
		size = 0;
		arr = new int[cap];
		fill(arr, arr + cap, -1);
	}
	int hash(int key)
	{
		return key % 7;
	}
	bool search(int key)
	{
		int h = hash(key);
		int i = h;
		while (arr[i] != -1)
		{
			if (arr[i] == key)
				return true;
			i = (i + 1) % cap;
			if (i == h)
				return false;
		}
		return false;
	}
	bool insert(int key)
	{
		if (size == cap)
			return false;
		int i = hash(key);
		while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
			i = (i + 1) % cap;
		if (arr[i] == key)
			return false;
		else
		{
			arr[i] = key;
			size++;
			return true;
		}
		return false;
	}
	bool erase(int key)
	{
		int h = hash(key);
		int i = h;
		while (arr[i] != -1)
		{
			if (arr[i] == key)
			{
				arr[i] = -2;
				return true;
			}
			i = (i + 1) % cap;
			if (i == h)
				return false;
		}
		return false;
	}
	void print()
	{
		for (int i = 0 ; i < cap; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	MyHash mh(7);
	mh.insert(45);
	mh.insert(12);
	mh.insert(52);
	mh.insert(32);
	mh.insert(16);
	mh.insert(23);
	mh.insert(31);
	mh.insert(93);
	cout << mh.search(45) << endl;;
	mh.print();
	mh.erase(31);
	mh.print();
	return 0;
}