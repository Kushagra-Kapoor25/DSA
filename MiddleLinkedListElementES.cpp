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
// One traversal of the list
void printMiddle(Node *head)
{
	if (head == NULL)
	{
		cout << "List is empty so no middle element." << endl;
		return;
	}
	Node *slow, *fast;
	slow = fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << slow->key << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = NULL;
	printList(head);
	printMiddle(head);
	head  = insertEnd(head, 1);
	head  = insertEnd(head, 2);
	head  = insertEnd(head, 3);
	head  = insertEnd(head, 4);
	head = insertEnd(head, 5);
	printList(head);
	printMiddle(head);
	head = insertEnd(head, 6);
	printList(head);
	printMiddle(head);
	return 0;
}
