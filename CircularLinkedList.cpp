#include<bits/stdc++.h>
using namespace std;
struct  Node
{
	int key;
	Node *next;
	Node (int data)
	{
		key = data;
		next = NULL;
	}
};

Node *insertNode(Node *tail, int data)
{
	if (tail == NULL)
	{
		Node *temp = new Node(data);
		tail = temp;
		tail->next = tail;
		return tail;
	}
	Node *temp = new Node(data);
	Node *curr = tail->next;
	tail->next = temp;
	tail = temp;
	tail->next = curr;
	return tail;
}
void printList(Node *tail)
{
	if (tail == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	Node *curr = tail;
	curr = curr->next;
	while (curr != tail)
	{
		cout << curr->key << " ";
		curr = curr->next;
	}
	cout << curr->key << " " << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *tail = NULL;
	printList(tail);
	tail = insertNode( tail, 1);
	tail = insertNode( tail, 2);
	tail = insertNode( tail, 3);
	printList(tail);
	tail = insertNode( tail, 4);
	tail = insertNode( tail, 5);
	tail = insertNode( tail, 6);
	printList(tail);
	return 0;
}