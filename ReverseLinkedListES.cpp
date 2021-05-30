#include<bits/stdc++.h>
#include "sll.h"
using namespace std;
Node *reverseList(Node *head)
{
	Node *curr = head;
	Node *prev = NULL;
	while (curr != NULL)
	{
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev; //prev becomes the head
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = NULL;
	head = insertEnd(head, 1);
	head = insertEnd(head, 2);
	head = insertEnd(head, 3);
	head = insertEnd(head, 4);
	head = insertEnd(head, 5);
	printList(head);
	head = reverseList(head);
	printList(head);
	return 0;
}
// Time complexity: O(n)
// Aux Space: O(1)