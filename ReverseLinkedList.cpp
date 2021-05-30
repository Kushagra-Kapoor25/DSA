#include<bits/stdc++.h>
#include "sll.h"
using namespace std;
Node *reverseList(Node *head)
{
	vector<int> v;
	for (Node *curr = head; curr != NULL; curr = curr->next)
		v.push_back(curr->key);
	for (Node *curr = head; curr != NULL; curr = curr->next)
	{
		curr->key = v.back();
		v.pop_back();
	}
	return head;
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
// One traversal
// Aux space: O(n)