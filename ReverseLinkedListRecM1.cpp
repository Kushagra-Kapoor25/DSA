#include<bits/stdc++.h>
#include "sll.h"
using namespace std;
Node *recRevList(Node *head)
{
	if (head == NULL || head->next == NULL) //Base case
		return head;
	Node *rest_head = recRevList(head->next);
	Node *rest_tail = head->next;
	rest_tail->next = head;
	head->next = NULL;
	return rest_head;
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
	head = recRevList(head);
	printList(head);
	return 0;
}
