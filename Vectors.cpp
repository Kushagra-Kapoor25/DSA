/* Understanding Vectors

Vector in C++ STL is a class that represents a dynamic array.

Vectors have many in-built functions for erasing an element, inserting an element etc.

Vectors support dynamic sizes, we do not have to initially specify the size of a vector.

Vectors are same as dynamic arrays with the ability to resize itself automatically when an
element is inserted or deleted, with their storage being handled automatically by the
container.

Vector elements are placed in contiguous storage so that they can be accessed and traversed
using iterators. In vectors, data is inserted at the end.

Inserting at the end takes differential time, as sometimes there may be a need of extending
the array. Removing the last element takes only constant time because no resizing happens.
Inserting and erasing at the beginning or in the middle is linear in time.

To use the Vector class, include the below header file in your program:
#include< vector >

Declaring Vector:
vector< Type_of_element > vector_name;

Some important and commonly used functions of Vector class are:

begin() – Returns an iterator pointing to the first element in the vector.
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector.
size() – Returns the number of elements in the vector.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
empty() – Returns whether the container is empty.
push_back() – It push the elements into a vector from the back.
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position.
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type and size.
clear() – It is used to remove all the elements of the vector container.
emplace() – It extends the container by inserting new element at position.
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector.

Below program illustrate the above methods: */
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector <int> vec;
	for (int i = 0; i < n; i++)
		vec.push_back(i);
	cout << "The elements are in the vector are: ";
	for (int i = 0; i < vec.size(); i++)
		cout << vec.at(i) << " ";
	cout << endl;

	vec.insert (vec.begin() + 3, 10);
	cout << "Vector after insertion of the value:" << endl;
	for (int i = 0; i < vec.size(); i++)
		cout << vec.at(i) << " ";
	cout << endl;

	vec.erase (vec.begin() + 3);
	cout << "Vector after deletiontion of the value:" << endl;
	for (int i = 0; i < vec.size(); i++)
		cout << vec.at(i) << " ";
	cout << endl;

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;

	cout << "The size of the vector is :" << vec.size() << endl;
	cout << "The capacity of the vector is :" << vec.capacity() << endl;

	vec.clear();
	cout << "The vector has been cleared. Vector empty results in: " << vec.empty() << endl;
	cout << "The size of the vector is :" << vec.size() << endl;
	cout << "The capacity of the vector is :" << vec.capacity() << endl;
}