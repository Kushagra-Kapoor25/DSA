/* Lists

Lists are sequence containers that allow non-contiguous memory allocation.
List in C++ STL implements a doubly linked list and not arrays.
As compared to vector, list has slow traversal, but once a position has been
found, insertion and deletion are quick.
Normally, when we say a List, we talk about doubly linked lists.

To use the List class, include the below header file in your program:
#include< list >

Declaring List:
list< Type_of_element > list_name;

Here, Type_of_element can be any valid C++ data type,
or can be any other container also like Pair, List etc.

Some important and commonly used functions of List are:

front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front(g) – Adds a new element ‘g’ at the beginning of the list.
push_back(g) – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
begin() and end() – begin() function returns an iterator pointing to the first element of the list.
empty() – Returns whether the list is empty(1) or not(0).
insert() – Inserts new elements in the list before the element at a specified position.
reverse() – Reverses the list.
size() – Returns the number of elements in the list.
sort() – Sorts the list in increasing order. */

#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	list<int> lst;
	for (int i = 1; i < 11; i++)
		lst.push_front(i);
	for (int i = 11; i < 21; i++)
		lst.push_back(i);
	for (int &x : lst)
		cout << x << " ";
	cout << endl;
	lst.reverse();
	for (int &x : lst)
		cout << x << " ";
	cout << endl;
	lst.sort();
	for (int &x : lst)
		cout << x << " ";
	cout << endl;
	lst.clear();
	cout << lst.empty() << endl;
}
