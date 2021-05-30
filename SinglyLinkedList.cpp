#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int key;
	Node *next;
	Node (int x)
	{
		key = x;
		next = NULL;
	}
};
Node *insertBegin(Node *head, int key)
{
	Node *temp = new Node(key);
	temp->next = head;
	return temp;
}
Node *insertEnd(Node *head, int key)
{
	if (head == NULL)
		return new Node(key);
	Node *curr = head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new Node(key);
	return head;
}
void printList(Node *head)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}
	Node *curr = head;
	while (curr != NULL)
	{
		cout << (curr->key) << " ";
		curr = curr->next;
	}
	cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = NULL;
	printList(head);
	head = insertEnd(head, 4);
	head = insertEnd(head, 5);
	head = insertBegin(head, 3);
	head = insertBegin(head, 2);
	head = insertBegin(head, 1);
	printList(head);
	return 0;
}