#include <bits/stdc++.h>
#include "sll.h"
using namespace std;
void printNthFromEnd(Node *head, int n)
{
	if (head == NULL)
		return;
	Node *first, *second;
	first = second = head;
	for (int i = 0; i < n; i++)
	{
		if (first == NULL)
			return;
		first = first->next;
	}
	second = head;
	while (first != NULL)
	{
		first = first->next;
		second = second->next;
	}
	cout << (second->key) << " ";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = NULL;
	int n;
	cin >> n;
	head = insertEnd(head, 1);
	head = insertEnd(head, 2);
	head = insertEnd(head, 3);
	head = insertEnd(head, 4);
	head = insertEnd(head, 5);
	printList(head);
	printNthFromEnd(head,  n);
	return 0;
}