#include<bits/stdc++.h>
#include "sll.h"
using namespace std;
Node *recRevList(Node *curr, Node *prev)
{
	if (curr == NULL) //Base case
		return prev;
	Node *next = curr->next;
	curr->next = prev;
	return recRevList(next, curr);
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
	head = insertEnd(head, 6);
	printList(head);
	head = recRevList(head, NULL);
	printList(head);
	return 0;
}
