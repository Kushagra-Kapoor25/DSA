#include<bits/stdc++.h>
using namespace std;
struct  Node
{
	int key;
	Node *prev;
	Node *next;
	Node(int data)
	{
		key = data;
		prev = next = NULL;
	}
};
Node *insertBegin(Node *head, int data)
{
	if (head == NULL)
		return new Node(data);
	Node *temp = new Node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
	return head;
}
Node *insertAfter(Node *head, int data)
{
	if (head == NULL)
		return new Node(data);
	Node *curr = head;
	while (curr->next != NULL)
		curr = curr->next;
	Node *temp = new Node(data);
	curr->next = temp;
	return head;
}
void printList(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->key << " ";
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
	head = insertBegin(head,  3);
	head = insertBegin(head,  2);
	head = insertBegin(head,  1);
	head = insertBegin(head,  0);
	printList(head);
	head = insertAfter(head,  4);
	head = insertAfter(head,  5);
	head = insertAfter(head,  6);
	head = insertAfter(head,  7);
	printList(head);
	head = insertBegin(head , -1);
	printList(head);
	return 0;
}